#ifndef BOOKS_H
#define BOOKS_H

#include "Book.h"
#include <vector>

class Books {
public:
	Books() = default;
	void addBook(std::shared_ptr<Book> book);
	bool deleteBookByID(int id);
	bool changeBookByID(int id, const std::string& title, const std::string& author, const std::string& info) const;
	std::vector<std::shared_ptr<Book>> findBookByTitle(const std::string& title) const;
	std::vector<std::shared_ptr<Book>> findBookByAuthor(const std::string& author) const;
	std::shared_ptr<Book> findBookByID(int id) const;
	std::vector<std::shared_ptr<Book>> findBookByInfo(const std::string& info) const;
	std::vector<std::shared_ptr<Book>> findBook(const std::string& searchQuery) const;
private:
	std::vector<std::shared_ptr<Book>> books;
};


#endif // BOOKS_H
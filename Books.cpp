#include "Books.h"

#include <algorithm>

// Helper function to convert a string to lowercase
std::string toLower(const std::string& str) {
	std::string lowerStr = str;
	std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
	return lowerStr;
}

void Books::addBook(std::shared_ptr<Book> book) 
{
	books.push_back(book);
}

bool Books::deleteBookByID(int id)
{
	for (auto book = books.begin(); book != books.end(); ++book) {
		if ((*book)->getID() == id) {
			books.erase(book);
			return true;
		}
	}
	return false;
}

bool Books::changeBookByID(int id, const std::string& title, const std::string& author, const std::string& info) const
{
	for (const auto& book : books) {
		if (book->getID() == id) {
			book->setTitle(title);
			book->setAuthor(author);
			book->setInfo(info);
			return true;
		}
	}
	return false;
}

std::vector<std::shared_ptr<Book>> Books::findBookByTitle(const std::string& title) const 
{
	std::vector<std::shared_ptr<Book>> foundBooks;
	std::string lowerTitle = toLower(title);

	for (const auto& book : books) {
		std::string bookTitle = toLower(book->getTitle());
		if (bookTitle.find(lowerTitle) != std::string::npos) {
			foundBooks.push_back(book);
		}
	}
	return foundBooks;
}

std::vector<std::shared_ptr<Book>> Books::findBookByAuthor(const std::string& author) const
{
	std::vector<std::shared_ptr<Book>> foundBooks;
	std::string lowerAuthor = toLower(author);

	for (const auto& book : books) {
		std::string bookAuthor = toLower(book->getAuthor());
		if (bookAuthor.find(lowerAuthor) != std::string::npos) {
			foundBooks.push_back(book);
		}
	}
	return foundBooks;
}

std::shared_ptr<Book> Books::findBookByID(int id) const
{
	for (const auto& book : books) {
		if (book->getID() == id) {
			return book;
		}
	}
	return nullptr;
}

std::vector<std::shared_ptr<Book>> Books::findBookByInfo(const std::string& info) const
{
	std::vector<std::shared_ptr<Book>> foundBooks;
	std::string lowerInfo = toLower(info);

	for (const auto& book : books) {
		std::string bookInfo = toLower(book->getInfo());
		if (bookInfo.find(lowerInfo) != std::string::npos) {
			foundBooks.push_back(book);
		}
	}
	return foundBooks;
}

std::vector<std::shared_ptr<Book>> Books::findBook(const std::string& searchQuery) const
{
	std::vector<std::shared_ptr<Book>> foundBooks;
	std::string lowerQuery = toLower(searchQuery);

	for (const auto& book : books) {
		std::string bookTitle = toLower(book->getTitle());
		std::string bookAuthor = toLower(book->getAuthor());
		std::string bookInfo = toLower(book->getInfo());

		if (bookTitle.find(lowerQuery) != std::string::npos ||
			bookAuthor.find(lowerQuery) != std::string::npos ||
			bookInfo.find(lowerQuery) != std::string::npos) {
			foundBooks.push_back(book);
		}
	}
	return foundBooks;
}


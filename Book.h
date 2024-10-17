#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book {
public:
    Book(const std::string& title = "No Title", const std::string& author = "No Author", const std::string& additionalInfo = "");

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getInfo() const;
    int getID() const;

    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setInfo(const std::string& info);
    void addInfo(const std::string& info);

private:
    std::string title;
    std::string author;
    std::string info;
    const int id;
    static int count; // for creating book id
};

#endif // BOOK_H

#include "Books.h"

int main() {
    // Создаем экземпляр класса Books
    Books library;

    // Создаем несколько книг
    std::shared_ptr<Book> book1 = std::make_shared<Book>("The Great Gatsby", "F. Scott Fitzgerald", "Classic novel");
    std::shared_ptr<Book> book2 = std::make_shared<Book>("To Kill a Mockingbird", "Harper Lee", "Pulitzer Prize winner");
    std::shared_ptr<Book> book3 = std::make_shared<Book>("1984", "George Orwell", "Dystopian novel");
    std::shared_ptr<Book> book4 = std::make_shared<Book>("Animal Farm", "George Orwell", "Political allegory");

    // Добавляем книги в библиотеку
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);

    // Тестируем поиск по названию (case-insensitive и поиск по подстроке)
    std::cout << "Searching for '1984':" << std::endl;
    auto foundBooksByTitle = library.findBookByTitle("1984");
    for (const auto& book : foundBooksByTitle) {
        std::cout << "Found book: " << book->getTitle() << " by " << book->getAuthor() << std::endl;
    }

    // Тестируем поиск по автору
    std::cout << "\nSearching for books by 'George Orwell':" << std::endl;
    auto foundBooksByAuthor = library.findBookByAuthor("George Orwell");
    for (const auto& book : foundBooksByAuthor) {
        std::cout << "Found book: " << book->getTitle() << " by " << book->getAuthor() << std::endl;
    }

    // Тестируем поиск по информации (case-insensitive)
    std::cout << "\nSearching for books with 'novel' in info:" << std::endl;
    auto foundBooksByInfo = library.findBookByInfo("novel");
    for (const auto& book : foundBooksByInfo) {
        std::cout << "Found book: " << book->getTitle() << " by " << book->getAuthor() << std::endl;
    }

    // Тестируем универсальный поиск по всем полям
    std::cout << "\nSearching for 'allegory':" << std::endl;
    auto foundBooks = library.findBook("allegory");
    for (const auto& book : foundBooks) {
        std::cout << "Found book: " << book->getTitle() << " by " << book->getAuthor() << std::endl;
    }

    // Тестируем удаление книги по ID
    int idToDelete = book2->getID();
    bool isDeleted = library.deleteBookByID(idToDelete);
    if (isDeleted) {
        std::cout << "\nBook with ID " << idToDelete << " has been deleted." << std::endl;
    }
    else {
        std::cout << "\nFailed to delete book with ID " << idToDelete << "." << std::endl;
    }

    // Тестируем изменение данных книги по ID
    int idToChange = book1->getID();
    bool isChanged = library.changeBookByID(idToChange, "The Greatest Gatsby", "F. Scott Fitzgerald", "Updated description");
    if (isChanged) {
        std::cout << "\nBook with ID " << idToChange << " has been updated." << std::endl;
    }

    return 0;
}
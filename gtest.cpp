#include <gtest/gtest.h>
#include "Book.h"

// Test for default constructor
TEST(BookTest, DefaultConstructor) {
    Book book;
    EXPECT_EQ(book.getTitle(), "No Title");
    EXPECT_EQ(book.getAuthor(), "No Author");
    EXPECT_EQ(book.getInfo(), "");
    EXPECT_TRUE(book.getAvailability());
}

// Test for parameterized constructor
TEST(BookTest, ParameterizedConstructor) {
    Book book("1984", "George Orwell", "Dystopian novel", false);
    EXPECT_EQ(book.getTitle(), "1984");
    EXPECT_EQ(book.getAuthor(), "George Orwell");
    EXPECT_EQ(book.getInfo(), "Dystopian novel");
    EXPECT_FALSE(book.getAvailability());
}

// Test for unique ID generation
TEST(BookTest, UniqueIDs) {
    Book book1("Book1", "Author1", "Info1", true);
    Book book2("Book2", "Author2", "Info2", false);

    EXPECT_NE(book1.getID(), book2.getID());
    EXPECT_EQ(book2.getID(), book1.getID() + 1);
}

// Test getters
TEST(BookTest, Getters) {
    Book book("War and Peace", "Leo Tolstoy", "Historical fiction", true);
    EXPECT_EQ(book.getTitle(), "War and Peace");
    EXPECT_EQ(book.getAuthor(), "Leo Tolstoy");
    EXPECT_EQ(book.getInfo(), "Historical fiction");
    EXPECT_TRUE(book.getAvailability());
}

// Test setters
TEST(BookTest, Setters) {
    Book book;
    book.setTitle("Pride and Prejudice");
    book.setAuthor("Jane Austen");
    book.setInfo("Romantic novel");
    book.setAvailability(false);

    EXPECT_EQ(book.getTitle(), "Pride and Prejudice");
    EXPECT_EQ(book.getAuthor(), "Jane Austen");
    EXPECT_EQ(book.getInfo(), "Romantic novel");
    EXPECT_FALSE(book.getAvailability());
}

// Test for appending information
TEST(BookTest, AppendInfo) {
    Book book("Book1", "Author1", "Initial Info.", true);
    book.addInfo(" Additional details.");
    EXPECT_EQ(book.getInfo(), "Initial Info. Additional details.");
}

// Test for setting availability
TEST(BookTest, SetAvailability) {
    Book book("Title", "Author", "Info", true);
    EXPECT_TRUE(book.getAvailability());

    book.setAvailability(false);
    EXPECT_FALSE(book.getAvailability());
}

// Edge case test: empty strings
TEST(BookTest, EmptyStrings) {
    Book book("", "", "", true);
    EXPECT_EQ(book.getTitle(), "");
    EXPECT_EQ(book.getAuthor(), "");
    EXPECT_EQ(book.getInfo(), "");
    EXPECT_TRUE(book.getAvailability());
}

// Stress test: Large info string
TEST(BookTest, LargeInfo) {
    std::string largeInfo(10000, 'a'); // 10,000 'a' characters
    Book book("Large Info Book", "Author", largeInfo, true);

    EXPECT_EQ(book.getInfo(), largeInfo);

    std::string appendInfo(5000, 'b'); // 5,000 'b' characters
    book.addInfo(appendInfo);

    EXPECT_EQ(book.getInfo().size(), 15000);
    EXPECT_TRUE(book.getInfo().find("aaaa") != std::string::npos);
    EXPECT_TRUE(book.getInfo().find("bbbb") != std::string::npos);
}

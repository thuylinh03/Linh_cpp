#pragma once
#include<iostream>


using namespace std;
// Bai 2: <DE 1>
class Book{
    private: 
        string nameBook;
        string nameAuthor;
        int numberBook;

    public:
        Book(){

        }

        Book(string nameBook, string nameAuthor, int numberBook) : nameBook(nameBook), nameAuthor(nameAuthor), numberBook(numberBook) {
            cout << "Book created" << endl;
        }

        string getNameBook(){
            return nameBook;
        }

        string getNameAuthor(){
            return nameAuthor;
        }

        int getNumberBook(){
            return numberBook;
        }

        void setNameBook(string nameBook){
            this->nameBook = nameBook;
        }

        void setNameAuthor(string nameAuthor){
            this->nameAuthor = nameAuthor;
        }

        void setNumberBook(int numberBook){
            this->numberBook = numberBook;
        }



        void display(){
            cout << "Name Book: " << nameBook << endl;
            cout << "Name Author: " << nameAuthor << endl;
            cout << "Number Book: " << numberBook << endl;
        }
};



// #ifndef BOOK_H
// #define BOOK_H

// #include <iostream>
// #include <string>
// using namespace std;

// class Book{
//     private: 
//         string nameBook;
//         string nameAuthor;
//         int numberBook;

//     public:
//         Book();

//         Book(string nameBook, string nameAuthor, int numberBook);

//         string getNameBook();

//         string getNameAuthor();

//         int getNumberBook();

//         void setNameBook(string nameBook);

//         void setNameAuthor(string nameAuthor);

//         void setNumberBook(int numberBook);

//         void display();
// };

// #endif



// #include "Book.h"

// Book::Book(){

// }

// Book::Book(string nameBook, string nameAuthor, int numberBook) : nameBook(nameBook), nameAuthor(nameAuthor), numberBook(numberBook) {
//     cout << "Book created" << endl;
// }

// string Book::getNameBook(){
//     return nameBook;
// }

// string Book::getNameAuthor(){
//     return nameAuthor;
// }

// int Book::getNumberBook(){
//     return numberBook;
// }

// void Book::setNameBook(string nameBook){
//     this->nameBook = nameBook;
// }

// void Book::setNameAuthor(string nameAuthor){
//     this->nameAuthor = nameAuthor;
// }

// void Book::setNumberBook(int numberBook){
//     this->numberBook = numberBook;
// }

// void Book::display(){
//     cout << "Name Book: " << nameBook << endl;
//     cout << "Name Author: " << nameAuthor << endl;
//     cout << "Number Book: " << numberBook << endl;
// }

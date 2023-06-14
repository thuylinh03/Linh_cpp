#pragma once
#include<iostream>
#include "Children.cpp"
#include "Adult.cpp"

using namespace std;

int main(){
    vector<Book> book(5);
    book[0] = Book("A", "F", 15);
    book[1] = Book("B", "G", 10);
    book[2] = Book("C", "H", 6);
    book[3] = Book("D", "I", 11);
    book[4] = Book("E", "K", 9);

    for(auto x : book){
        x.display();
    }

    Children ch[3];
    ch[0] = Children("Linh", 20, "HN", {book[0], book[1]});
    ch[1] = Children("Phuong", 24, "HN", {book[0], book[1], book[2]});
    ch[2] = Children("Tuan Anh", 14, "HN", {book[3], book[4]});

    

    Adult ad[2];
    ad[0] = Adult("Mai", 10, "HN", {book[3], book[4]});
    ad[1] = Adult("Thao", 3, "HN", {book[0], book[2]});
}
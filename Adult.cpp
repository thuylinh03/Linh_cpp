#pragma once

#include "Person.cpp"

using namespace std;

class Adult : public Person{
    public:
        Adult(){}

        Adult(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb){
            cout << "Adult created" << endl;
        } 

        long moneyPay(){
            Person :: moneyPay();
            return this->getVB().size() * 10000;
        }

        void display(){
            cout << "Doc gia Nguoi lon" << endl;
            Person :: display();
        }
};
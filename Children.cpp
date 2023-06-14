#pragma once
#include "Person.cpp"


using namespace std;

class Children : public Person{
    public: 
        Children(){}

        Children(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb){
            cout << "Children created" << endl;
        }

        long moneyPay(){
            Person :: moneyPay();
            return this->getVB().size() * 5000;
        }

        void display(){
            cout << "Doc gia Tre em" << endl;
            Person :: display();
        }

};
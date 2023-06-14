#pragma once
#include<iostream>

using namespace std;

class Food{
    private:
        string name;
        double price;

    public:
        Food(){}

        Food(string name, double price) : name(name), price(price){

        }

        string getName(){
            return name;
        }

        double getPrice(){
            return price;
        }

        void setPrice(double price){
            this->price = price;
        }

};

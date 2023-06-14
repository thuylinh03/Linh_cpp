#include "Dog2.h"
#include<iostream>

    Dog2 :: Dog2(){
        cout << "Dog22" << endl;
    }

    Dog2 :: Dog2(int id, string name) : id(id), name(name) {
            cout << "Dog2" << endl;
    }

    void Dog2 :: display(){
            cout << "Dog" << " " << id << " " << name << endl;
    }


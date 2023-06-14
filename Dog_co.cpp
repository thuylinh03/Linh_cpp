#include<iostream>
#include "Dog_co.h"

using namespace std;

        Dog_co :: Dog_co(){
            cout << "Dog_co" << endl;
        }
        Dog_co :: Dog_co(int id, string name) : Dog2(id, name), w(w){
            cout << "Dog_co" << endl;
        }

        void Dog_co :: display(){
            cout << "Dog_co" << " " << w << endl;
        }
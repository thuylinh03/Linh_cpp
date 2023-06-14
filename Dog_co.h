#pragma once



#include "Dog2.h"



class Dog_co : public Dog2{
    public: 
        float w;

        Dog_co();

        Dog_co(int , string , float );

        void display();
};


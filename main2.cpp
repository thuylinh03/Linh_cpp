#pragma once
#include "NonCFood.cpp"
#include "CannedFood.cpp"

using namespace std;

int main(){
    vector<CannedFood> can(3);
    can[0] = CannedFood("1", 1000, 6);
    can[1] = CannedFood("2", 3000, 1);
    can[2] = CannedFood("3", 6000, 2);

    cout << "Max cua gia: " << endl;
    int max = 0;
    for(int i=0; i<can.size(); i++){
        if(can[i].getNumberBox() > can[max].getNumberBox()){
            max = i;
        }
    }
    can[max].setPrice(can[max].getPrice());

    cout << "Sap xep theo so luong: " << endl;
    CannedFood :: sortNumberBox(can);
    for(auto x : can){
        x.display();
    }

    cout << endl << endl;

    vector<NonCFood> non(3);
    non[0] = NonCFood("A", 1000, 3.0);
    non[1] = NonCFood("B", 3000, 1.0);
    non[2] = NonCFood("C", 6000, 4.0);

    cout << "Max cua can nang: " << endl;
    int max1 = 0;
    for(int i=0; i<non.size(); i++){
        if(non[i].getWeight() > non[max1].getWeight()){
            max1 = i;
        }
    }
    non[max1].setWeight(non[max1].getWeight());

    cout << "Sap xep theo can nang: " << endl;
    NonCFood :: sortWeight(non);
    for(auto x : non){
        x.display();
    }
}
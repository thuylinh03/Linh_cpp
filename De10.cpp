#pragma once
// #include "People.cpp"
// #include "Family.cpp"
#include "Group.cpp"

using namespace std;

int main(int argc, char* argv[]){
    vector<People> p(4);
    p[0] = People("A", 20, "co viec", "1");
    p[1] = People("B", 18, "co viec", "2");
    p[2] = People("C", 30, "co viec", "3");
    p[3] = People("D", 10, "that nghiep", "4");

    // for(auto x : p){
    //     x.display();
    // }

    vector<Family> f(2);
    f[0] = Family("E", "poor", "HN",{p[0], p[3]});
    f[1] = Family("F", "rich", "TP.HCM", {p[2], p[3]});

    for(auto &c : Family :: getPoorHousehold(f)){
        c.display();
    }
}
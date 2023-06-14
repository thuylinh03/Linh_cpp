#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;
#define TODAY = 1000;
class Dog{
    private:
        const string name;
    public:
        int tuoi;
        float w;
        string color;
        string breed;
        string owner_name;
        char sex;
        int date;

        Dog(){

        }

        Dog(string name, int tuoi, float w, string color, string breed, string cwner_name, char sex, int date):name(name), tuoi(tuoi), w(w), color(color), breed(breed), owner_name(owner_name), sex(sex), date(date) {

        }

        void getName(string name){
            return name;
        }

        bool check(){
            if(date > 90){
                cout << "Can tiem lai " << endl;
                cout << "Lan tiem cuoi cung: " << 100-date << endl;
            }else{
                cout << "okila" << endl;
            }
        }

        bool check(string sex){
            if(sex == 1){
                return sex = "cai";
            }else{
                return sex = "duc";
            }
        }

        void inthongtin(){
            cout << name << " " << tuoi << " " << w << " " << color << " " << breed << " " << owner_name << " " << sex << " " << date << endl;
        }

};

int main(int argc, char* argv[]){
    Dog d = ("Misu" , 10, 25, "trang" , "mi" , "Linh" , "1", 25);
    d.check;
    d.inthongtin();
}
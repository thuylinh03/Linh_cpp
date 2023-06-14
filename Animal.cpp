#include<iostream>
// #include<fstream>
// #include<string>
// #include<vector>
// #include<sstream>

using namespace std;

class Animal{
    public:
        int id;
        string name;
        int tuoi;
        const char sex;
        float weight;

        
        Animal(int id, string name, int tuoi, const char sex, float weight) : id(id) , name(name), tuoi(tuoi), sex(sex), weight(weight){
            cout << "Animal created" << endl;
        }

        void display(){
            cout << "ID: " << id << endl;
            cout << "Ten: " << name << endl;
            cout << "Tuoi: " << tuoi << endl;
            cout << "Gioi tinh: " << sex << endl;
            cout << "Can nang: " << weight << endl;
        }

        void eat(){
            cout << "Ten: " << name << " thich an moi thu" << endl; 
        }

        char xacdinhGT(float weight){
            if(weight<50){
                return 'f';
            }else{
                return 'm';
            }
        }
};

class Dog1 : public Animal{
    public:
        string color;
        string breed;
        string time_date;

        Dog1(int id, string name, int tuoi, const char sex, float weight, string color, string breed, string time_date) : Animal(id, name, tuoi, sex, weight), color(color), breed(breed), time_date(time_date){
            cout << "Dog" << endl;
        }

        void display(){
            Animal :: display();
            cout << "Mau long: " << color << endl;
            cout << "Giong: " << breed << endl;
            cout << "Time_date: " << time_date << endl; 
        }


};

int main(int argc, char* argv[]){
    Animal a(1,"a",2,'f',56);
    a.display();
    cout << "*************************" << endl;
    Dog1 d(2,"s",2,'m',50, "vang", "h", "23");
    d.display();
    return 0;
}
#include<iostream>

using namespace std;
class Employee{
    public:
        int id;
        string name;
        const char sex;
        int tuoi;
        string diachi;

        Employee(int id, string name, const char sex, int tuoi, string diachi) : id(id), name(name), sex(sex), tuoi(tuoi), diachi(diachi){
            cout << "Employee created" << endl;
        }

        void display(){
            cout << "ID: " << id << endl; 
            cout << "Ten: " << name << endl;
            cout << "Gioi tinh: " << sex << endl; 
            cout << "Tuoi: " << tuoi << endl;
            cout << "Dia chi: " << diachi << endl;      
        }

};

class Parttime_Employee : public Employee{
    public:
        float luong_cung;

        Parttime_Employee(int id, string name, const char sex, int tuoi, string diachi, float luong_cung) : Employee(id, name, sex, tuoi, diachi), luong_cung(luong_cung){
            cout << "Parttime_Employeer" << endl;
        }

        void display(){
            Employee :: display();
            cout << "Luong cung: " << luong_cung << endl;
        }
};

class Fulltime_Employee : public Employee{
    public: 
        float luong;
        string ngay_ki;

        Fulltime_Employee(int id, string name, const char sex, int tuoi, string diachi, float luong, string ngay_ki) : Employee(id, name, sex, tuoi, diachi) , luong(luong), ngay_ki(ngay_ki){
            cout << "Fulltime_Employeer" << endl;
        }

        void display(){
            Employee :: display();
            cout << "Luong: " << luong << endl;   
            cout << "Ngay ki hop dong: " << ngay_ki << endl;     
        }
};


int main(int argc, char* argv[]){
    Parttime_Employee pe(1,"Linh", 'f', 20, "Hanoi", 20);
    pe.display();

    cout << "*******************************" << endl;

    Fulltime_Employee fe(1,"Phuong", 'f', 24, "Hanoi", 20, "30/03/2023");
    fe.display();
    return 0;
}
#pragma once
#include<vector>

#include "Book.cpp"
#include<algorithm>

using namespace std;

class Person{
    private:
        string name;
        int age;
        string add;
        vector<Book> vb;

    public:
        Person(){}

        Person(string name, int age, string add, vector<Book> vb) : name(name), age(age), add(add), vb(vb){
            cout << "Person created" << endl;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        string getAdd(){
            return add;
        }

        vector<Book> getVB(){
            return vb;
        }

        void setName(string name){
            this->name = name;
        }

        void setAge(int age){
            this->age = age;
        }

        void setAdd(string add){
            this->add = add;
        }

        void setVB(vector<Book> vb){
            this->vb = vb;
        }

        virtual long moneyPay() = 0;

        virtual void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Add: " << add << endl;

            cout << "List book borrowed" << endl;
            for(int i=0; i<vb.size(); i++){
                vb[i].display();
            }
            cout << "Money pay: " << moneyPay() << endl;
        }

        static void sortPersonAge(vector<Person*> &vp){
            for(int i=0; i<vp.size()-1; i++){
                for(int j=i+1; j<vp.size(); j++){
                    if(vp[i]->getAge() > vp[j]->getAge()){
                        swap(vp[i], vp[j]);
                    }
                }
            }
        }

        static vector<int> getListAge(vector<Person*> vt){
            vector<int> str;
            for(int i=0; i<vt.size(); i++){
                if(!(find(str.begin(), str.end(), vt[i]->getAge()) != str.end())){
                    str.push_back(vt[i]->getAge());
                }
            }
            return str;
        }

        static vector<Book> getMaxBookBorrower(vector<Person*> &vp, vector<Book> &vb){

        }
};

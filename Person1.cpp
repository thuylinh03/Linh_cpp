#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Person1{
    private:
        string name;
        int age;
        string add;
        string tel;
        string sex;
    public:
        Person1(){}

        Person1(string name, int age, string add, string tel, string sex) : name(name), age(age), add(add), tel(tel), sex(sex){}

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        string getAdd(){
            return add;
        }

        string getTel(){
            return tel;
        }

        string getSex(){
            return sex;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Add: " << add << endl;
            cout << "Tel: " << tel << endl;
            cout << "Sex: " << sex << endl;
        }

        virtual long salary() = 0;

        static vector<Person1*> findPerson(vector<Person1*> &p){
            vector<Person1*> vp;
            for(int i=0; i<p.size(); i++){
                if(p[i]->getAdd() == "HN"){
                    vp.push_back(p[i]);
                }
            }
            return vp;
        }
};
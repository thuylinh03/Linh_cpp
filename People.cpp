#include<iostream>
#include<string>
#include<vector>

using namespace std;
class People{
    private:
        string name;
        int age;
        string job;
        string id;

    public: 
        People(){}

        People(string name, int age, string job, string id) : name(name), age(age), job(job), id(id){

        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Job: " << job << endl;
            cout << "Id: " << id << endl;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        string getJob(){
            return job;
        }

        string getId(){
            return id;
        }
};


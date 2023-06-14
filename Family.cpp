// #include<iostream>
// #include<string>
// #include<vector>
#include "People.cpp"

using namespace std;

class Family{
    private:
        string nameF;
        string status;
        string add;
        vector<People> p;
    public:
        Family(){}

        Family(string nameF, string status, string add, vector<People> p) : nameF(nameF), status(status), add(add), p(p){

        }

        string getNameF(){
            return nameF;
        }

        string getStatus(){
            return status;
        }

        string getAdd(){
            return add;
        }

        vector<People> getP(){
            return p;
        }

        void display(){
            cout << "NameF: " << nameF << endl;
            cout << "Status: " << status << endl;
            cout << "Add: " << add << endl;
            cout << "List people: " << endl;
            for(int i=0; i<p.size(); i++){
                p[i].display();
            }
        }

        static vector<Family> getPoorHousehold(vector<Family> &fa){
            vector<Family> v;
            for(int i=0; i<fa.size(); i++){
                if(fa[i].getStatus() == "poor"){
                    v.push_back(fa[i]);
                }
            }
            return v;
        }

        static vector<Family> findFamilySurname(vector<Family> &fa, string surname){
            vector<Family> v;
            for(int i=0; i<fa.size(); i++){
                if(fa[i].getNameF() == surname){
                    v.push_back(fa[i]);
                }
            }
            return v;
        }
};
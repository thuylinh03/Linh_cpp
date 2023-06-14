#include<iostream>
#include "Food.cpp"
#include<vector>

using namespace std;

class NonCFood : Food{
    private:
        double weight;

    public:
        NonCFood(){}

        NonCFood(string name, double price, double weight) : Food(name, price), weight(weight){

        }

        double getWeight(){
            return weight;
        }

        void setWeight(double weight){
            this->weight = weight;
        }

        void display(){
            cout << "Name: " << Food :: getName() << endl;
            cout << "Price: " << Food :: getPrice() << endl;
            cout << "Weight: " << weight << endl;
        }

        static void sortWeight(vector<NonCFood> &vt){
            //sort(vt.begin(), vt.end());
            for(int i=0; i<vt.size()-1; i++){
                for(int j=i+1; j<vt.size(); j++){
                    if(vt[j].weight < vt[i].weight){
                        swap(vt[j], vt[i]);
                    }
                }
            }
        }
};
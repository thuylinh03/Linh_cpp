#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;
class Snake{
    private:
        const string name;
        bool doc = true;
    public:
        float length;
        float weight;
        string color;
        float r;
        string loai;
        vector<string> dish;

        Snake(){

        }

        Snake(string name, string doc, float length, float weight, string color, float r, string loai, string dish): name(name), doc(doc), length(length), weight(weight), color(color), r(r), loai(loai), dish(dish)  {
            cout << "Con ran da duoc tao" << endl;
        }
        
        void getName(string name){
            return name;
        }

        void display(){
            cout << name << " " << length << " " << weight << " " << r << " " << color << " " << doc << " " << loai << " " << dish << endl;     
        }

        float getBMI(float weight, float length){
            return weight/(length*length);
        }

        bool thap_gay(){
            bmi = getBMI();
            if(bmi<15){
                return true;
            }else{
                return false;
            }
        }
};

int main(int argc, char* argv[]){
    Snake s;
    s.getName("ALOLO");
    s.length = 15;
    s.weight = 5;

}
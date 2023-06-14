#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;
class Snake{
    private:
        const string name;
    public:
        int length;
        float weight;

};

































// class Monster{
//     private: 
//         const string nick_name;

//     public:
//         int HP;
//         int speed;
//         int mana;
//         int armor;
//         int damage;
//         vector<string> skill; 

//         Monster(){

//         }

//         Monster(string nick_name, int HP, int speed, int mana, int armor, int damage):nick_name(nick_name), HP(HP), speed(speed), mana(mana), armor(armor), damage(damage) {
//         }

//         void getHit(int damage){
//             if(armor >= damage){
//                 armor -= damage;
//             }else{
//                 HP -= damage - armor;
//                 armor = 0;
//             }
//         }

//         string getName(){
//             return nick_name;
//         }

//         void hello1(){
//             cout << nick_name << " " << HP << " " << speed << " " << mana << " " << armor << " " << damage << endl;
//         }
// };

// int main(int argc, char* argv[]){
//     Monster m("GAGA", 100, 100, 100, 100, 100);

//     Monster mm;

//     // m.setName("GAGA");
//     // m.speed = 100;
//     //m.hello1();
//     m.getHit(50);
//     m.hello1();

// }
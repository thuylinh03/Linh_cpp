#include<iostream>

using namespace std;

class Dog1{
    public:
        int id;
        string name;
        const char sex;
        int age;
        string owner;
        string breed;
        float weight;

        Dog1(int id, string name, const char sex, int age, string owner, string breed, float weight) : id(id), name(name), sex(sex), age(age), owner(owner), breed(breed), weight(weight) {
            cout << "Created Dog1" << endl;
        }

        Dog1(const char sex) : sex(sex){
            cout << "Created Dog1" << endl;
        }

        Dog1(const Dog1& d) : sex(sex){
            id = d.id;
            name = d.name;
            age = d.age;
            owner = d.owner;
            breed = d.breed;
            weight = d.weight;
            cout << "Created Dog1" << endl;
        }

        Dog1& operator<<(const Dog1& d){
            id = d.id;
            name = d.name;
            age = d.age;
            owner = d.owner;
            breed = d.breed;
            weight = d.weight;

            return *this;
        }

        Dog1& operator<<(float w){
            weight = w;
            cout << "weight assignment sucessful" << endl;
            return *this;
        }
        
}

int main(int argc, char* argv[]){
    Dog1 d(1, "Gau" ,'m', 3,"ahihi", "rrrg", 4);


}
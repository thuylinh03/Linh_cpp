#include<iostream>
#include<vector>

using namespace std;

class Animal1{
    public:
        int id;
        string name;
        const char sex;
        float age;

        Animal1(int id, string name, const char sex, float age) : id(id), name(name), sex(sex), age(age){
            cout << "Animal tao thanh cong" << endl;
        }

        virtual void display(){
            cout << "id = " <<  id << " " << "name = " << name << " " << "Sex = " << sex << " " << sex << " " << "age = "  << age << endl;
        }

        virtual void bite(){
            cout << "Can" << endl;
        }

        virtual string getString() = 0;


};

class Dog : public Animal1{
    public:
        string color;
        string owner;

        Dog(int id, string name, const char sex, float age, string color, string owner) : Animal1(id, name, sex, age), color(color), owner(owner){
            cout << "Dog" << endl;
        }

        void display(){
            Animal1 :: display();
            cout << "Mau: " << color << " " << "Chu:  " << owner << endl;
        }

        void bite(){
            Animal1 :: bite();
            cout << "Dog can" << endl;
        }

        string getString() override{
            stringstream ss;
            ss << "Dog " << id << " " << color << " " << owner;
            return ss.str();
        }


};

class Goose : public Animal1{
    public:
        float w;
        float h;

        Goose(int id, string name, const char sex, float age, float w, float h) : Animal1(id, name, sex, age), w(w), h(h) {
            cout << "Goose tao thanh cong" << endl;
        }

        void display(){
            Animal1 :: display();
            cout << "Can nang = " << w << " " << "Chieu cao:  " << h << endl;
        }

        void bite(){
            Animal1 :: bite();
            cout << "Ngong can" << endl;
        }

        string getString() override{
            stringstream ss;
            ss << "Goose " << id << " " << w << " " << h;
            return ss.str();
        }
};

    ostream& operator<<(ofstream os, Animal1& a){
        os << a.getString();
        return os;
    }


int main(int argc, char* argv[]){
    Animal1 a(1,"a",'m',10);
    Dog d(2,"do",'m',2,"trang","ahiji");
    Goose g(1,"go", 'f', 2, 4, 12);

    // a.display();
    // d.display();
    // g.display();

    vector<Animal1*> vec;
    // vec.push_back(&a);
    vec.push_back(&d);
    vec.push_back(&g);
    for(int i=0; i<vec.size(); i++){
        vec[i]->display();
    }

    for(int i=0; i<vec.size(); i++){
        cout << *vec[i] << endl;
    }
}

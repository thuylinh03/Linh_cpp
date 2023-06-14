#include<iostream>
#include<vector>
using namespace std;

class Student{
    public:
        int id;
        string name;
        const char sex;
        int age;
        string lop;
        float GPA;

        Student(char sex) : sex(sex){
            cout << "Empty student" << endl;
        }

        Student(int id, string name, const char sex, int age, string lop, float GPA) : id(id), name(name), sex(sex), age(age), lop(lop), GPA(GPA) {
            cout << "Created Student" << endl;
        }

        // copy constructor
        // C1:
        // Student(const Student& s) : sex(s.sex) {
        //     id = s.id;
        //     name = s.name;
        //     age = s.age;
        //     lop = s.lop;
        //     GPA = s.GPA;
        // }
        // C2:
        Student(const Student& s) : id(s.id), name(s.name), sex(s.sex), age(s.age), lop(s.lop), GPA(s.GPA) {
            // cout << "Created Student" << endl;
        }


        Student(const Student& s, char sex) : id(s.id), name(s.name), sex(s.sex), age(s.age), lop(s.lop), GPA(s.GPA){
            cout << "Student" << endl;
        }

        // assignment operator
        Student& operator = (const Student& s){
            id = s.id;
            name = s.name;
            age = s.age;
            lop = s.lop;
            GPA = s.GPA;
            cout << "Assignment sucessful" << endl;
            return *this;
        }

        Student& operator<<(float g){
            GPA = g;
            cout << "GPA assignment sucessful" << endl;
            return *this;
        }

        Student& operator<<(string s){
            name = s;
            cout << "Name assignment sucessfull" << endl;
            return *this;
        }

        void display(){
            cout << "ID: " << id << endl;
            cout << "Ten: " << name << endl;
            cout << "Gioi tinh: " << sex << endl;
            cout << "Tuoi: " << age << endl;
            cout << "Lop: " << lop << endl;
            cout << "GPA: " << GPA << endl;
        }


};

int main(int argc, char* argv[]){
    // Student s(1, "Ahihi", 'm', 20, "cntt5", 4.0);
    // Student s_copy(s);
    // s.display();

    // Student x('m');
    // x = s;
    // cout << x.GPA << endl;


    vector<Student> vec;
    vec.reserve(20);

    for(int i=0; i<20; i++){
        // Student s('m');
        // s.id = i;
        // cout << s.id << endl;
        // vec.push_back(s);

        vec.emplace_back('m');
        cout << endl;
        vec[i].id = i;
    }


    // Student s_copy = s;
}
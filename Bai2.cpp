#include<iostream>
#include<string>
#include<vector>

using namespace std;
// Bai 2: <DE 1>
class Book{
    private: 
        string nameBook;
        string nameAuthor;
        int numberBook;

    public:
        Book(){

        }

        // Book(string nameBook, string nameAuthor, int numberBook) : nameBook(nameBook), nameAuthor(nameAuthor), numberBook(numberBook) {
        //     cout << "Book created" << endl;
        // }

        // string getNameBook(){
        //     return nameBook;
        // }

        // string getNameAuthor(){
        //     return nameAuthor;
        // }

        // int getNumberBook(){
        //     return numberBook;
        // }

        Book(string nameBook, string nameAuthor, int numberBook){
            this->nameBook = nameBook;
            this->nameAuthor = nameAuthor;
            this->numberBook = numberBook;
        }

        string getNameBook(){
            return this->nameBook;
        }

        string getNameAuthor(){
            return this->nameAuthor;
        }

        int getNumberBook(){
            return this->numberBook;
        }

        void display(){
            cout << "Name Book: " << nameBook << endl;
            cout << "Name Author: " << nameAuthor << endl;
            cout << "Number Book: " << numberBook << endl;
        }
};

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
            vector<string> str;

        }

        static vector<Book> getMaxBookBorrower(vector<Person*> &vp, vector<Book> &vb){

        }
};

class Children : public Person{
    public: 
        Children(){}

        Children(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb){
            cout << "Children created" << endl;
        }

        long moneyPay(){
            //Person :: moneyPay();
            return this->getVB.size() * 5000;
        }

        void display(){
            cout << "Doc gia Tre em" << endl;
            Person :: display();
        }

};

class Adult : public Person{
    public:
        Adult(){}

        Adult(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb){
            cout << "Adult created" << endl;
        } 

        long moneyPay(){
            //Person :: moneyPay();
            return this->getVB.size() * 10000;
        }

        void display(){
            cout << "Doc gia Nguoi lon" << endl;
            Person :: display();
        }
};

int main(int argc, char* argv[]){
    Book b("Tren duong bang", "Tony Buoi Sang", 1);
    Book b2("Toi thay hoa vang tren co xanh", "Nguyen Nhat Anh", 2);
    
    
    b.display();

    cout << endl;

    b2.display();
}
#include<iostream>
#include<vector>

using namespace std;

class SinhVien{
    public:
        int id;
        string name;
        char sex;
        int age;

        SinhVien(int id, string name, char sex, int age) : id(id), name(name), sex(sex), age(age){
            cout << "Sinh vien" << endl;
        }

        virtual void display(){
            cout << "Sinh vien" << " " << id << "  " << name << "  " << sex << "  " << age;
        }

        string getString(){
            stringstream ss;
            ss << "Sinh vien" << " " << id << " " << name << endl;
            return ss.str();
        }


};

class Sv_CNTT : public SinhVien{
    public: 
        int toeic;

        Sv_CNTT(int id, string name, char sex, int age, int toeic) : SinhVien(id,name,sex,age), toeic(toeic){
            cout << "Cong nghe thong tin" << endl;
        }

        void display(){
            cout << "Sv_CNTT" << " " << id << " " << name << " " << toeic;
        }

        string getString(){
            stringstream ss;
            ss << "Sinh vien cong nghe thong tin" << " " << id << " " << name << " " << toeic << endl;
            return ss.str();
        }

};

class Sv_CNTTVJ : public SinhVien{
    public:
        string JLPT;

        Sv_CNTTVJ(int id, string name, char sex, int age, string JLPT) : SinhVien(id, name, sex, age), JLPT(JLPT){
            cout << "Cong nghe thong tin viet nhat" << endl; 
        }

        void display(){
            cout << "Sv_CNTTVJ" << " " << id << " " << name << " " << JLPT << endl;
        }

        string getString(){
            stringstream ss;
            ss << "Sinh vien cong nghe thong tin viet nhat" << " " << id << " " << name << " " << JLPT << endl;
            return ss.str();
        }
};

class Sv_CNTT_Talent : public SinhVien{
    public:
        int ielts;

        Sv_CNTT_Talent(int id, string name, char sex, int age, int ielts) : SinhVien(id, name, sex, age) , ielts(ielts){
            cout << "Cong nghe thong tin tai nang" << endl;
        }

        void display(){
            cout << "Sv_CNTT_Talent" << " " << id << "  " << name << " " << ielts << endl;
        }

        string getString(){
            stringstream ss;
            ss << "Sinh vien cong nghe thong tin tai nang" << " " << id << " " << name << " " << ielts << endl;
            return ss.str();
        }
};



int main(){

}
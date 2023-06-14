#include<iostream>

using namespace std;

class Rec{
    public:
        int id;
        float dai;
        float rong;
        string color;

        Rec(){
            id = 0;
        }

        Rec(int id, float dai, float rong, string color) : id(id), dai(dai), rong(rong), color(color) {
            cout << "Rec duoc tao" << endl;
        }

        void display(){
            cout << id << " " << dai << " " << rong << " " << color << endl;
        }

        Rec& operator = (const Rec & r){
            id = r.id;
            dai = r.dai;
            rong = r.rong;
            color = r.color;
            return *this;
        }

        Rec& operator ++(){
            dai  ++;
            rong ++;
            return *this;
        }

        Rec& operator --(){
            dai --;
            rong --;
            return *this;
        }

        Rec& operator +=(int a){
            dai += a;
            rong +=a;
            return *this;
        }

        Rec& operator = (const string & s){
            color = s;
            return *this;
        }

        Rec operator + (const Rec& r2){
            Rec tong;
            tong.dai = dai + r2.dai;
            tong.rong = rong + r2.rong;
            return tong;
        }

        bool operator <= (const Rec&  r1){
            if(dai*rong <= r1.dai*r1.rong){
                return true;
            } else{
                return false;
            }
        }

        // Rec operator +(float x){
        //     Rec tong;
        //     tong.dai = dai + x;
        //     tong.rong = rong + x;
        //     return tong;
        // }

        friend Rec operator+(float x, const Rec& r);


        Rec& operator<<(ostream& os){
            os << id << " " << dai << " " << rong << " " << color << " .Dien tich" << " " << dai*rong << endl;
        }

};

Rec operator + (float x, const Rec& r){
    Rec tong;
    tong.dai = r.dai + x;
    tong.rong = r.rong + x;
    return tong;
}

int main(int argc, char* argv[]){
    Rec tong;
    Rec r(1,1,1,"red");
    Rec r1(2,2,2,"white");
    r = r1;
    r = "black";
    // ++r;
    // r.display();
    // --r;
    // r.display();
    int n;
    cout << "Nhap 1 so bat ki: " << endl;
    cin >> n;
    r += (n);
    r.display();
    tong = 3+r;
    tong.display();

    if(tong <= r){
        cout << "Tong be hon" << endl; 
    } else{
        cout << "Tong lon hon" << endl;
    }

    tong.operator<<(cout);
    //c2:
    // tong << cout;
    // cout << endl;
    return 0;
}
#include<iostream>
using namespace std;


// bool isNum(string s){
//     for(int i = 0; i<s.size(); i++){
//         if(!isdigit(s[i])){
//             return false;
//         }
//     }
//     return true;
// }

int main(int argc, char *argv[]){
    int age; //stoi(string) //stod(string)
    string name;
    for(int i = 0; i<argc ; ++i){
        if(string(argv[i]) == string("-n")){
            name = argv[i+1];
            cout << "ok name" << endl;
        }
        if(string(argv[i]) == string("-a")){
            age = stoi(argv[i+1]);
            cout << "ok age" << endl;
        }
    }
    cout << age + 10 << endl;
    cout << "Hello" << " " << name << " "  << age << endl;






    // if(argc < 3){
    //     cout << "Thieu du lieu" << endl;
    //     exit(0);
    // } else if(argc > 3){
    //     cout << "Thua du lieu" << endl;
    //     exit(0);
    // }

    // if(!isNum(argv[2])){
    //     cout << "age khong la so" << endl;
    //     exit(0);
    // }
    // string name = argv[1];
    // string age = argv[2];
    // cout << name << " " << age << endl;
}

// float the_tich(float r, float h);
// void check(float& r, float& h);

// int main(){
//     float r, h;
//     cin >> r >> h;
//     check(r,h);
//     cout << r << " " << h << endl;
// }


// float the_tich(float r, float h){
//     const float pi = 3.14;
//     float v;
//     return v = pi * r * r * h;
// }

// void check(float& r, float& h){
//     float v = the_tich(r,h);
//     if(v>10){
//         r++;
//         h++;
//     }else{
//         h--;
//     }
//     cout << "Trong ham " << r << " " << h << endl;
// }
#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std :: string;
using std :: vector;


// in ra vector chi co so nguyen to:
bool check(int n){
    int demUoc = 0;
    for (int i=1; i<=n; i++){
        if (n % i == 0){
            demUoc ++;
        }
    }
    if(demUoc == 2){
            return true;
    } else{
        return false;
        }
}

int main(int argc, char *argv[]){
    cout << "Nhap size cua vector: " << endl;
    int n;
    cin >> n;
    vector<int> vec;  // tao vector co kieu la so nguyen ten la vec
    for(int i = 2; vec.size() <n; i++){
        if(check(i)){
            vec.push_back(i);   // ten.push_back : them gia tri vao cuoi vector
        }
    }

    for (auto c : vec){    // auto: khi ta quen kieu 
        cout << c << " ";
    }

    cout << endl;






    // string s = "Hello World";
    // int n;
    // cin >> n;
    // //getline : lấy tất cả khi có cả dấu cách
    // for (int i=0; i<n; i++){
    //     auto &c = s[i];
    //     if(!isupper(c)){
    //         c = toupper(c);
    //     }
    //     cout << c << endl;
    // }
    // cout << s << endl;

    return 0;
}
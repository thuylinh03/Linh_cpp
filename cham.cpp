#include<iostream>
#include<string>
#include<vector>
using namespace std;
using std :: string;
using std :: vector;

bool laSNT(int n){
    int demUoc=0;
    for(int i=1; i<n; ++i){
        if(n%i == 0){
            demUoc++;
        }
    }
    
    if(demUoc == 2){
        return true;
    } else{
        return false;
    }
}

int main(int argc, char* argv[]){
    vector<int> vec;
    int n;
    cin >> n;
    for(int i=2; vec.size() < n;i++){
        if(laSNT(i)){
            vec.push_back(i);
        }
    }

    for(auto &x: vec){
        cout << x << endl;
    }
    // for(int i=0; i<vec.size();++i){
    //     cout << vec[i] << endl;
    // }
    return 0;
}












//int main(){
    //// Viet ham in ra so nguyen to trong khoang:
    // cout << "Nhap hai gia tri a va b: " << endl;
    // int a, b;
    // cin >> a >> b;
    // int hch, hdv;
    // hch = 
    // int demSNT = 0;
    // for(int i = a; i<= b; i++){
    //     int demUOC = 0;
    //     for(int j = a+1; j<b; j++){
    //         if(i%j){
    //             demUOC ++;
    //         }
    //         if(demUOC == 2){
    //         cout << "La so nguyen to" << endl;
    //         } else{
    //         cout << "Khong la so nguyen to" << endl;
    //         }
    //     }
        
    // }







    //// Nhap vao mot so co 4 chu so kiem tra cac chu so co la so le:
    // cout << "Nhap so co 4 chu so: " << endl;
    // int n;
    // cin >> n;
    // int hch;
    // int res = 0;
    // while(n>0){
    //     hch = n%10;
    //     res = res*10 + hch;
    //     n = n/10;
    // }
    // if(res%2 != 0){
    //     cout << "Cac chu so deu la so le" << endl;
    // }else{
    //     cout << "Cac chu so deu la so chan" << endl;
    // }
    




    //// tim so lon nhat:
    // cout << "Nhap ba so nguyen: " << endl;
    // int a,b,c;
    // cin  >> a >> b >> c;
    // cout << "Max = " << (a>b?
    //                         (a>c?a:c)
    //                         :(b>c?b:c)) << endl;
    // cout << "Min = " << (a<b?
    //                         (a<c?a:c)
    //                         :(b<c?b:c)) << endl;



    //// dao nguoc cua mot so:
    // cout << "Nhap mot so: " << endl;
    // int n;
    // cin >> n;
    // int tmp;
    // int res = 0;
    // while(n>0){
    //     tmp = n%10;
    //     res = res*10 + tmp;
    //     n = n/10;
    // }
    // cout << "So dao nguoc la: " << res << endl;
        
//     return 0;
// }
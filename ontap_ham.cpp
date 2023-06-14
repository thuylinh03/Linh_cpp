#include<iostream>
using namespace std;





void check(int n){
    int hch;
    int res = 0;
    int max = 0;
    while(n>0){
        hch = n % 10;
        res = res * 10 + hch;
        n = n / 10;
        if (res % 2 == 0){
            do{
                hch = n % 10;
                if (hch > max){
                    max = hch;
                }
            } while (n = n / 10);
        //     cout << "So lon nhat trong n la so chan" << endl;
        // } else{
        //    cout << "So lon nhat trong n khong la so chan" << endl; 
        // }
        } cout << "So lon nhat trong n la so chan" << endl;
    }
     cout << "So lon nhat trong n khong la so chan" << endl;
}

int main(){
    cout << "Nhap mot so bat ki co 4 chu so: " << endl;
    int n;
    do{
        // cout << "Nhap mot so bat ki co 4 chu so: " << endl;
        // int n; 
        cin >> n;
        if(n<999 && n>10000){
            cout << "Vui long xin nhap lai!" << endl;
        }
    }while(n<999 && n>10000);
    check(n);
}







// void tang_x(int &x){  // dung tham chieu
//     x = x + 2;
// }

// int main(){
//     int x = 5;
//     cout << "Gia tri ban dau la: " << x << endl;
//     tang_x(x);
//     cout << "Gia tri luc sau la: " << x << endl;
// }




//// viet ham kiem tra ba canh nhap vao tu ban phim co la ba canh cua mot tam giac vuong can khong
// bool check(int a, int b, int c){
//     if (a+b>c && a+c>b && b+c>a){
//         if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ){
//             if(a==b || b==c || a==c){
//                 return true;
//             } else{
//                 return false;
//                 }
//         }
//     }
// }

// int main(){
//     cout << "Nhap ba canh cua tam giac" << endl;
//     int a,b,c;
//     cin >> a >> b >> c;
//     if (check(a,b,c) == true){
//         cout << "La tam giac vuong can" << endl;
//     } else{
//         cout << "Khong la tam giac vuong can" << endl;
//     }
// }
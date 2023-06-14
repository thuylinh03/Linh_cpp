#include<iostream>
using namespace std;

int main(){
//     cout << "Nhap hai so x va y: " << endl;
//     int a, b;
//     cin >> a >> b;
//     int demSNT = 0;
//     for (int i=a; demSNT<=(b-a+1); i++){
//         int demUoc = 0;
//         for (int j=a; j<=i; j++){
//             if(i%j == 0){
//                 demUoc++;
//             }
//         }
//         if(demUoc == 2){
//             demSNT++;
//             if(demSNT == (b-a+1)){
//                 break;
//             }
//         }
//         if(demSNT < 2){
//             cout << "Khong thoa man" << endl;
//         }
//         if(demSNT >= 2){
//             cout << "Thoa man" << endl;
//         }
//     }
//     return 0;
// }




// int max_mang(int a[], int n){
//     int max = a[0];
//     for (int i=0; i<n; i++){
//         if(a[i]>max){
//             max = a[i];
//         }
//     }
//     return max;
// }

// int min_mang(int a[], int n){
//     int min = a[0];
//     for (int i=0; i<n; i++){
//         if(a[i]<min){
//             min = a[i];
//         }
//     }
//     return min;
// }

// void sap_xep_tang(int a[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(a[i] > a[j]){
//             int m = a[i];
//             a[i] = a[j];
//             a[j] = m;
//             }
//         }
//     }
//     for (int i=0; i<n; i++){
//         cout << a[i] << "  " << endl;
//     }
// }

// void sap_xep_giam(int a[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(a[i] < a[j]){
//             int m = a[i];
//             a[i] = a[j];
//             a[j] = m;
//             }
//         }
//     }
//     for (int i=0; i<n; i++){
//         cout << a[i] << "  " << endl;
//     }
// }


// int main(){
//     //// in ra cac so nguyen roi sap xep: 
//     cout << "Nhap so phan tu: " << endl;
//     int n;
//     cin >> n;
//     int i;
//     int a[n];
//     int max = a[0];
//     for (i=0; i<n; i++){
//         cin >> a[i];
//     }

//     cout << "Cac so vua nhap la: " << endl;
//     for (i=0; i<n; i++){
//         cout << a[i] << "  " << endl;
//     }

//     cout << "Gia tri lon nhat la: " << max_mang(a,n) << endl;
//     cout << "Gia tri nho nhat la: " << min_mang(a,n) << endl;
//     cout << "Theo thu tu tang dan: " << endl;
//     sap_xep_tang(a,n);
//     cout << "Theo thu tu giam dan: " << endl;
//     sap_xep_giam(a,n);








    // Nhan mot so voi n SNT dau tien: 
    cout << "Nhap n va x: " << endl;
    int n, x;
    cin >> n >> x;
    int demSNT = 0;
    //cout << "Phep nhan cua : " << x << " voi " << n << " SNT dau tien la: " << endl;
    for (int i=2; i<n; ++i){
        int demUoc = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                demUoc++;
            }
        }

        if(demUoc == 2){
            cout << i << endl;
            //cout << x << " * " << i << " = " << x*i << endl;
            demSNT++;
            if(demSNT == n){
                break;
            }
        }
    }
    return 0;
}

    //// in ra bang cuu chuong:
    // cout << "Nhap x" << endl;
    // int x;
    // cin >> x;
    // cout << "Bang cuu chuong cua x la: " << endl;
    // for (int i=0; i<=10; i++){
    //     cout << x << " * " << i << " = " << x*i << endl;
    // }

    //// tinh the tich hinh tru:
    // cout << "Nhap do dai ban kinh day: \n";
    // float r;
    // cin >> r;
    // cout << "Nhap chieu cao hinh tru: \n";
    // float h;
    // cin >> h;
    // cout << "The tich hinh tru co r = " << r << " va h = " << h << " la: " << 3.14*r*r*h;
//     return 0;
// }
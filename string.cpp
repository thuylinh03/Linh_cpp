#include<iostream>

using namespace std;

typedef struct SinhVien{
    char ten[100];
    char que[50];
    int mssv;
    float diem;
    float chieucao;
    float cannang;
} Sv;

void nhap_lieu(Sv danhsach[], int n){
    for (int i=0; i<n; i++){
        getchar();
        cout << "Nhap ten sinh vien: " << endl;
        gets(danhsach[i].ten);
        //getchar();
        cout << "  Nhap que sinh vien: " << endl;
        gets(danhsach[i].que);
        //
        cout << "  Nhap mssv: " << endl;
        cin >> danhsach->mssv;
        getchar();
        cout << "  Nhap diem sinh vien: " << endl;
        cin >> danhsach->diem;
        getchar();
        cout << "  Nhap chieu cao cua sinh vien: " << endl;
        cin >> danhsach->chieucao;
        getchar();
        cout << "  Nhap can nang cua sinh vien: " << endl;
        cin >> danhsach->cannang;
    }
}

int BMI(Sv s){
    return s.cannang / (s.chieucao * 2);
}

int main(){
    int n;
    cout << "Nhap so sinh vien: " << endl;
    cin >> n;
    Sv danhsach[n];
    nhap_lieu(danhsach, n);
    int a = BMI(&danhsach);
    cout << "So BMI cua sinh vien la: " << a << endl;
}
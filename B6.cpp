#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

// // void sap_xep(vector<int> & A ){
// //     for(int i=0; i<A.size(); ++i){
// //         for(int j=i; j<A.size(); j++){
// //             if(A[i] < A[j]){
// //             int m = A[i];
// //             A[i] = A[j];
// //             A[j] = m;
// //             }
// //         }
// //     }


// // }

// // void xoa(vector<int> & A ){
// //     for(int i=0; i<A.size(); ++i){
// //         if(A[i] % 2 == 0){
// //             A.erase(A.begin() + i);
// //             --i;
// //         }
// //     }
// // }

// int main(int argc, char* argv[]){
//     vector<int> A = {1,5,7,9,14,16,85,3,7};
// //     xoa(A);
//     // sort(A.begin(), A.end(), greater<int>());  // sap xep giam dan
//     // A.insert(A.begin(), 100);
//     A.erase(A.begin() + 0);
    
//     // if (find(A.begin(), A.end(), 9) == A.end){
//     //     cout << "khong co" << endl;
//     // } else{
//     //     cout << "co" << endl;
//     // }
//     // sap_xep(A);
//     // int k = 1;
//     // cout << A[k-1] << endl;

//     for(auto i : A){
//         cout << i << " ";
//     }
//     // cout << endl;



















int main(int argc, char* argv[]){
    string s = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
    istringstream iss(s);
    string token;
    vector<string> luu;
    vector<int> count;

    while(iss >> token){  // getline(iss, token, " ");?????
        bool found = false;
        for (int i=0; i<luu.size(); ++i){
            string y = luu[i];
            if(token == y){
                found = true;
                count[i] ++;
                break;
            }
        }
        if(found == false)
        {
            luu.push_back(token);
            count.push_back(1);
        }
    }


    for(int i=0; i<luu.size(); ++i){
        cout << "So lan xuat hien cua " << luu[i] << " la: " << count[i] << endl;
    }
    cout << endl;
    
    return 0;
}




 
























    // vector<int> vec = {1,5,8,1,9,7,3,7};
    // vector<int> luu;
    // vector<int> count;
    // for (auto x : vec){
    //     bool found = false;
    //     for (int i=0; i<luu.size(); ++i){
    //         int y = luu[i];
    //         if(x == y){
    //             found = true;
    //             count[i] ++;
    //             break;
    //         }
    //     }
    //     if(found == false){
    //         luu.push_back(x);
    //         count.push_back(1);
    //     }
    // }

    // for(int i=0; i<luu.size(); ++i){
    //     cout << "So lan xuat hien cua " << luu[i] << " la " << count[i] << endl;
    // }
    // cout << endl;






// int main(int argc, char* argv[]){
//     vector<int> vec = {1,5,8,1,9,7,3,7};
//     vector<int> luu;
//     for (auto x : vec){
//         bool found = false;
//         for(auto y : luu){
//             if(x == y){
//                 found = true;
//                 break;
//             }
//         }
//         if(found == false){
//             luu.push_back(x);
//         }
//     }

//     for(auto i : luu){
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }


#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
#include<map>
#include<algorithm>
#include<unordered_map>
using namespace std;


// BAI 1:
// bool check(string s){
//     vector<string>vec;
//     istringstream iss(s);
//     string token;
//     while(getline(iss,token,'.')){
//         if(token.empty()||stoi(token)>255){
//             return false;
//         }
//         vec.push_back(token);
//     }
//     if(vec.size()!=4){
//         return false;
//     }
//     for(int i=vec.size()-1;i>=0;i--){
//         if(vec.empty()||stoi(vec[i])>255){
//             return false;
//         }
//     }
//     return true;
// }
// int main(int argc, char*argv[]){
//     string s="1.2.1.2";
//     if(check(s) && s.size() <= 7){
//         cout<<"hop le"<<endl;
//     }
//     else{
//         cout<<"khong hop le"<<endl;
//     }
// }





// BAI 1:
void hello(string s){
    istringstream iss(s);
    string token;
    vector<string> luu;
    vector<int> count;
    while(iss >> token){
        bool found = false;
        for(int i=0; i<luu.size(); i++){
            string y = luu[i];
            if(token == y){
                found = true;
                count[i] ++;
                break;
            }
        }
        if(found == false){
            luu.push_back(token);
            count.push_back(1);
        }
    }

    int max = 0;
    for(int i=0; i<count.size(); i++){
        if(count[i] > max){
            max = count[i];
        }
    }
    cout << max << endl;
}

int main(int argc, char* argv[]){
    string s = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release? of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
    hello(s);

}



// BAI 1:

// struct Lich{
//     int DD;
//     int MM;
//     int YYYY;
// };

// bool check(string s){
//     vector<Lich> lich;
//     istringstream iss(s);
//     string token;
//     while(iss >> token){
//         Lich l;
//         getline(iss, token, '/');
//         l.DD = stoi(token);
//         getline(iss, token, '/');
//         l.MM = stoi(token);
//         getline(iss, token, '/');
//         l.YYYY = stoi(token);
//         lich.push_back(l);
//     }

//     for(auto x : lich){
//         if(x.YYYY < 1900){
//             return false;
//         }
//         lich.push_back(x);
//     }

//     if(lich.size() != 4){
//         return false;
//     }

//     for(int i=lich.size()-1; i>=0; i--){
//         if(lich[i].YYYY < 1900){
//             return false;
//         }
//     }
//     return true;
// }


// bool check(string s){
//     istringstream iss(s);
//     string token;
//     vector<string> vec;
//     while(getline(iss, token, '/')){
//         if(token.back() - '0' > 1900){
//             return false;
//         }
//         vec.push_back(token);
//     }
//     if(vec.size() != 3){
//         return false;
//     }

//     for(int i=vec.size()-1; i>=0; --i){
//         if(vec[i].back() - '0' > 1900){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     string s = "17/02/2003";
//     if(check(s) && s.size() == 10){
//         cout << "thoa man" << endl;
//     }else{
//         cout << "khong thoa man" << endl;
//     }
// }










// BAI 1:
// void hello(string s){
//     istringstream iss(s);
//     string token;
//     map<string,int> m;
//     while(iss >> token){
//         cout << token;
//     }
// }

// int main(int argc, char* argv[]){
//     string s1 = "1 2 3 4 5";
//     string s2 = "6 7 8 9 1 2";
    
//     hello(s1,s2);
// }







#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

using std ::string;
using std ::vector;

// struct Showb{
//     string ten, que;
//     float luong;
// };


// int main(int argc, char* argv[]){
//     ifstream file;
//     file.open("showbiz.txt");

//     if(! file.is_open()){
//         cout << "File khong mo duoc" << endl;
//     }

//     vector<Showb> the_best;
//     string line;
//     getline(file, line);
//     while(getline(file, line)){
//         Showb S;
//         istringstream iss(line);
//         string token;
//         getline(iss, token, ',');
//         S.ten = string(token);
//         getline(iss, token, ',');
//         S.que = string(token);
//         getline(iss, token, ',');
//         S.luong = stod(token);
//         the_best.push_back(S);
//     }

//     // for (auto c: the_best){
//     //     cout << c.ten << " " << c.que << " " << c.luong << endl;
//     // }

//     for(auto x : the_best){
//         if(x.luong > 40){
//             cout << x.ten << " " << x.que << endl;
//         }
//     }
// }



struct Cauthu
{
    string name;
    int goal;
};

int main(int argc, char *argv[])
{
    ifstream inFile;
    inFile.open("the_best.txt", ios::app);

    if (!inFile.is_open())
    {
        cout << "File ko mo duoc";
        exit(0);
    }

    vector<Cauthu> all_cauthu;
    // string name;
    // int goal;
    string line;
    while (getline(inFile, line))
    {
        // cout << line << " ";
        
        Cauthu c;
        istringstream iss(line);
        string token;
        getline(iss, token, ',');
        c.name = string(token);
        getline(iss, token, ',');
        c.goal = stoi(token);
        all_cauthu.push_back(c);
        
    }

    // for(auto x : all_cauthu){
    //     if(x.goal<=4){
    //         all_cauthu.erase(all_cauthu.begin());
    //         cout << x.name << endl;
    //     }
    // }

    // for(auto n : all_cauthu){
    //     if(n.goal > 3){
    //         cout << n.name << " " << n.goal << endl;
    //     }
    // }



    // for(auto c : so_ban){
    //     cout <<
    // }
}
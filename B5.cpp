#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;


int main(int argc, char* argv[]){
    // ifstream inFile;
    // inFile.open("data2.txt");

    // if(! inFile.is_open()){     
    //     cout << "File ko mo duoc";
    //     exit(0);
    // }


    // ofstream outFile;
    // outFile.open("result.txt");


    // string line;
    // while(getline(inFile, line)){
    //     cout << line << endl;
    //     istringstream iss(line);
    //     string token;
    //     string name, club;
    //     int goal;

    //     string token;
    //     getline(iss, token, ',');
    //     cout << token << endl;
    //     getline(iss, token, ',');
    //     cout << token<< endl;
    //     getline(iss, token, ',');
    //     cout << token << endl;
    // } 








    // ifstream inFile;
    // inFile.open("data2.txt", ios::app);

    // if(! inFile.is_open()){     
    //     cout << "File ko mo duoc";
    //     exit(0);
    // }

    // ofstream outFile;
    // outFile.open("result.txt");
    

    // string line;
    // while(getline(inFile, line)){
    //     cout << line << endl;
    //     istringstream iss(line);
    //     string token;
    //     int sum = 0; 
    //     while(getline(iss, token, ',')){
    //         sum += stoi(token);
    //     }
    //     outFile << "Tong : " << sum << endl;
        
    // }

    // outFile.close();
    // inFile.close();



    // istringstream iss(line);
    // string token;
    // int sum = 0; 
    // int dem = 0;
    // while(getline(iss, token, ',')){
    //     sum += stoi(line);
    // }
    // cout >> "Tong : " >> sum >> endl;





    string s = "1.2.3.4";
    istringstream iss(s);
    int x;
    vector<int> vec;
    // string name, club;
    // int goal;

    string token;
    //getline(iss, token, ',');
    while(getline(iss, token, '.')){
        cout << token << " ";
        vec.push_back(token);
        

        // getline(iss, token, ',');
        // cout << token << " ";
    }

    for(auto x:vec){
        if(x>=0 && x<=225)
    }


    // for(auto x : vec){
    //     cout << 
    // }
    // getline(iss, token, ' ');

    // cout << token << " ";
    // getline(iss, token, ' ');
    // cout << token << " ";
    // getline(iss, token, ' ');
    // cout << token << " ";

    // iss >> name;
    // //cout << name << endl;
    // iss >> club; 
    // //cout << club << endl;
    // iss >> goal;
    // //cout << goal << endl;
    // cout << name << "-" << club << "-" << goal << endl;
    
    
    
// bool check(int n){
//     int demUoc = 0;
//     for(int i=1; i<n; i++){
//         if(n%i==0){
//             demUoc++;
//         }
//     }
//     if(demUoc == 2){
//         return true;
//     }else{
//         return false;
//     }
// }

    
//     ifstream inFile;
//     inFile.open("data.txt");

//     if(! inFile.is_open()){     
//         cout << "File ko mo duoc";  // kiem tra xem file co doc duoc khong
//         exit(0);
//     }

//     int x;
//     vector<int> vec;
//     int sum = 0;
//     int dem = 0;
//     while (inFile >> x){
//         vec.push_back(x);
//         sum += x;
//         cout << x << endl;
//         dem ++;
//     }
//     cout << "TBC = " << sum*1.0/dem << endl;

    // inFile.close();

    // // int x;
    // // inFile >> x;
    // // cout << x << end;

    // ofstream outFile;
    // outFile.open("result.txt");
    // outFile << "TBC = " << sum*1.0/dem << endl;

    // outFile.close();
    return 0;
}

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;
using std :: string;
using std :: vector;

void xoa(vector<string> & A ){
    for(int i=0; i<A.size(); ++i){
        if(A[i] == '$'){
            A.erase(A.begin() + i);
            --i;
        }
    }
}

int main(int argc, char* argv[]){
    vector<string> A = "$23.45 M";
    xoa(A);
    for(auto i : A){
        cout << i << " ";
    }
}









// struct Canh{
//     int i, j;
//     float trong_so;
// };

// int main(int argc, char* argv[]){
//     if(argc < 7){
//         cout << "invailid input" << endl;
//         exit(0);
//     }

//     string path = "network.txt";
//     int nodeID;
//     float w;
//     for(int i=0; i<argc; i++){
//         if(string(argv[i]) == string("-i")){
//             nodeID = stoi(argv[i+1]);
//         }
//         if(string(argv[i]) == string("-p")){
//             path = stoi(argv[i+1]);
//         }
//         if(string(argv[i]) == string("-w")){
//             nodeID = stod(argv[i+1]);
//         }
//     }

//     vector<Canh> all_canh;
//     ifstream inFile;
//     inFile.open("network.txt");
//     string line;
//     getline(inFile, line);
//     while(getline(inFile, line)){
//         Canh n;
//         istringstream iss(line);
//         string token;
//         getline(iss, token, ',');
//         n.i = stoi(token);
//         getline(iss, token, ',');
//         n.j = stoi(token);
//         getline(iss, token, ',');
//         n.trong_so = stod(token);
//         all_canh.push_back(n);
//     }

//     for(auto C : all_canh){
//         if(C.i == nodeID && C.trong_so > w){
//             cout << C.j << " " << C.trong_so << endl;
//         }
//     }



    
}
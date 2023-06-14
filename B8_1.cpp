#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

struct Canh{
    int i;
    int j;
    float trong_so;
};
int main(int argc , char* argv[]){
    if(argc < 7){
        cout << "invailid input" << endl;
        exit(0);
    }

    string path;
    int nodeId;
    float w;

    for (int i=1; i<argc; i++){
        if(string(argv[i]) == string("-i")){
            nodeId = stoi(argv[i+1]);
        }
        if(string(argv[i]) == string("-p")){
            path = argv[i+1];
        }
        if(string(argv[i]) == string("-w")){
            nodeId = stod(argv[i+1]);
        }
    }

    vector<Canh> all_Canh;
    ifstream inFile;
    inFile.open(path);
    // inFile.open("network.csv");
    string line;
    getline(inFile, line);
    while(getline(inFile, line)){
        Canh c;
        istringstream iss(line);
        string token;
        getline(iss, token, ',');
        c.i = stoi(token);
        getline(iss, token, ',');
        c.j = stoi(token);
        getline(iss, token, ',');
        c.trong_so = stod(token);
        all_Canh.push_back(c);
    }

    for (auto Canh : all_Canh){
        if(Canh.i == nodeId && Canh.trong_so > w){
            cout << Canh.j << " " << Canh.trong_so << endl;
        }
    }



    
}


#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(int argc, char* argv[]){
    ifstream inFile;
    inFile.open("meme.txt");

    if(! inFile.is_open()){
        cout << "Khong mo duoc file" << endl;
        exit(0);
    }

    string line;
    while(getline(inFile, line)){
        //cout << line << endl;
        string token;
        istringstream iss(line);
        while(getline(iss, token, ',')){
            cout << token << endl;
            string name, club;
            int goal;
            int max = 0;
            int sum = 0;
            for(auto x : line){
                if(goal>max){
                    max = goal;
                }
            }
            cout << "Ban thang nhieu nhat: " << max << endl;
            }
        }
}


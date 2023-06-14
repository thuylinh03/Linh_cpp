#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>

using namespace std;
// using std :: string;
// using std :: vector;
// using std :: invalid_argument;

// int main(){
//     ifstream inFile;
//     inFile.open("the_best.txt");
    
//     if(! inFile.is_open()){     
//         cout << "File ko mo duoc";  
//         exit(0);
//     }

//     string line;
//     istringstream iss(line);
//     map<string, int> vote;
//     string token;
//     while(iss >> token){
//         vote[token] ++;
//     }
//     string bestPlay;
//     int bestCount = -999;
//     for(auto c : vote){
//         if(c.second > bestCount){
//             bestPlay = c.first;
//             bestCount = c.second;
//         }
//     }
//     cout << bestPlay << endl;
//     return 0;
// }


int main(int argc, char *argv[]){
    ifstream inFile;
    inFile.open("showbiz.txt");
    
    if(! inFile.is_open()){     
        cout << "File ko mo duoc";  
        exit(0);
    }

    map<string, int> vote;
    istringstream iss(s);
    string token;
    string que;
    while(getline(inFile, line)){
        iss >> token;
        iss >> que;
        iss >> token;
        vote[que] += stoi(token);
    }

    for(auto c : vote){
        cout << c.first << " " << c.second << endl;
    }




    return 0;
}


// sets  && maps
// set : do phuc tap o(1), sap xep, duy nhat

// maps : do phuc tap o(1), sap xep theo bang chu cai


// int main(int argc, char *argv[]){
//     string s = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
//     map<string, int> words;
//     istringstream iss(s);
//     string token;
//     while(iss >> token){

//         words[token] ++;


        // if(words.count(token) == 0){
        //     words.insert(make_pair(token,1));  // words[token] = 1;
        // } else{
        //     words[token]++;
        // }



//     }
//     for(auto c : words){
//         cout << c.first << " " << c.second << endl;
//     }

//     return 0;
// }







// int main(int argc, char *argv[]){
//     map<string, float> score;
//     score["a"] = 9;
//     score["b"] = 8;
//     score["c"] = 9;
//     score["d"] = 8;
//     score["a"] = 10;

//     score.erase("a");
    
//     cout << score["b"] << endl;


//     for(auto x : score){
//         cout << x.first << " " << x.second << endl;
//     }


//     return 0;
// }




// int main(int argc, char *argv[]){
//     string s = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
//     set<string> words;     // unordered_set: khong sap xep
//     istringstream iss(s);
//     string token;
//     while(iss >> token){

//         words.insert(token);

//         // if(words.count(token) == 0){
//         //     words.insert(token);
//         // }
//     }
//     for(auto c : words){
//         cout << c << endl;
//     }
    







    // unordered_set<string> friends;

    // friends.insert("Thuy Linh");
    // friends.insert("Pham Phuong");
    // friends.insert("Thuy Tien");
    // friends.insert("Pham Phuong");

    // friends.insert("Thuy Linh");
    // friends.insert("Pham Phuong");
    // friends.insert("Thuy Tien");
    // friends.insert("Pham Phuong");

    // for( auto name : friends){
    //     cout << name << endl;
    // }


    // return 0;
//}
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

// struct Game{
//    int rank;
//    string name;
//    string platform;
//    int year;
//    string genre;
//    string publisher;
//    float na_sales;
//    float eu_sales;
//    float jp_sales;
//    float other_sales;
//    float global_sales; 
// };

// vector<Game>inGame(string &path){
//     vector<Game> game;
//     ifstream file;
//     file.open(path);

//     if(!file.is_open()){
//         cout << "File ko mo duoc!!!" << endl;
//         exit(0);
//     }

//     string line;
//     getline(file, line);
//     while(getline(file, line)){
//         Game g;
//         istringstream iss(line);
//         string token;
//         getline(iss, token, ',');
//         g.rank = stoi(token);
//         getline(iss, token, ',');
//         g.name = token;
//         getline(iss, token, ',');
//         g.platform = token;
//         getline(iss, token, ',');
//         g.year = stoi(token);
//         getline(iss, token, ',');
//         g.genre = token;
//         getline(iss, token, ',');
//         g.publisher = token;
//         getline(iss, token, ',');
//         g.na_sales = atof(token.c_str);
//         getline(iss, token, ',');
//         g.eu_sales = atof(token.c_str);
//         getline(iss, token, ',');
//         g.jp_sales = atof(token.c_str);
//         getline(iss, token, ',');
//         g.other_sales = atof(token.c_str);
//         getline(iss, token, ',');
//         g.global_sales = atof(token.c_str);
//         game.push_back(g);
//     }
// }

// void find_game(vector<Game> game, string publisherName){
//     publisherName = " ";
//     for(auto &x : game){
//         if(find_game(x.publisher.begin(), x.publisher.end(), publisherName) != x.publisher.end()){
//             cout << x.rank << " " << x.name << endl;
//         }
//     }
// }

// void dem(vector<Game>game, string gameGenre){
//     gameGenre = " ";
//     int count = 0;
//     for (auto &x : game){
//         if(find(x.genre.begin(), x.genre.end(), gameGenre) != x.genre.end()){
//             count ++;
//         }
//     }
//     cout << count << endl;
// }

// bool check(Game g1, Game g2){
//     return g1.global_sales > g2.global_sales;
// }


// void top_game(vector<Game> game, string platForm){
//     ofstream outfile("output.txt");
//     platForm = "PC";
//     for(int i=0; i<=10 && i<){
//         if
//     } 
// }

// int main(int argc, char* argv[]){
//     if(argc < 7){
//         cout << "Invaild it input" << endl;
//         exit(0);
//     }

//     string path;
//     string publisherName;
//     string gameGenre;
//     for(int i=1; i<argc; i++){
//         if(string(argv[i]) == string("-p")){
//             path = argv[i+1];
//         }
//         if(string(argv[i]) == string("-m")){
//             publisherName = argv[i+1];
//         }
//         if(string(argv[i]) == string("-i")){
//             gameGenre = argv[i+1];
//         }
//     }


//     return 0;
// }






// // BAI 1:

bool check(int a){
    if(a>=0 && a<=225){
        return true;
    }else{
        return false;
    }
}

int day_ip(string s){
    istringstream iss(s);
    string token;
    while(getline(iss, token, '.')){
        for(int i=0; i<s.size(); i++){
            if(check(s[i]) == true){
                cout << "dia chi ip hop le" << endl;
            }
            if(check(s[i]) == false){
                cout << "dia chi ip khong hop le" << endl;
            }
        }
    }
}

int main(int argc, char* argv[]){
    string s = "1.2.4.5";
    day_ip(s);
}



// BAI 1:

// void check(string s1, string s2){

// }

// int main(int argc, char* argv[]){
//     string s1 = "1 4 7 8 3 9";
//     string s2 = "3 8 0 6 2";
//     istringstream iss(s1);
//     string token;
//     while(getline(iss, token, ' ')){
//         cout << token;
//     }
//     return 0;
// }


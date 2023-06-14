#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<fstream>
#include<cmath>
#include<algorithm>
using namespace std;

// struct Movie{
//     int rank;
//     string name;
//     int year;
//     float rating;
//     vector<string> genre;
//     string certificate;
//     string run_time;
//     float budget;
//     float box_office;
//     vector<string> casts;
//     vector<string> directors;
// };

// void in_phim(vector<Movie>movies, string directorName){
//     directorName = "Sidney Lumet";
//     int sum = 0;
//     for(auto &x : movies){
//         if(find(x.directors.begin(), x.directors.end(), directorName)!=x.directors.end()){
//             sum += x.box_office;
//             cout << x.rank << " " << x.name << endl;
//         }
//     }
//     cout << "Tong doanh thu la:" << " " << sum << endl;
// }

// void dem(vector<Movie>movies, string run_time){
//     int count = 0;
//     for(auto &x : movies){
//         if(x.name >= run_time){
//             count ++;
//         }
//     }
//     cout << "So luong bo phim la: " << count << endl;
// }

// void findp(vector<Movie>movies, string actName){
//     actName = "Tom Hanks";
//     ofstream outfile("output.txt");
//     for(auto &x : movies){
//         if(find(x.casts.begin(), x.casts.end(), actName) != x.casts.end()){
//             outfile << x.rank << " " << x.name << endl;
//         }
//     }
// }


// vector<Movie>movies(string & path){
//     vector<Movie> movie;
//     ifstream file;
//     file.open("IMDB.csv");

//     if(!file.is_open()){
//         cout << "File ko mo duoc!!!" << endl;
//         exit(0);
//     }
//     vector<string> directors;
//     vector<string> genre;
//     vector<string> casts;
//     string line;
//     getline(file, line);
//     while(getline(file, line)){
//         Movie m;
//         istringstream iss(line);
//         string token;
//         getline(iss, token, ',');
//         m.rank = stoi(token);
//         getline(iss, token, ',');
//         m.name = token;
//         getline(iss, token, ',');
//         m.year = stoi(token);
//         getline(iss, token, ',');
//         m.rating = atof(token.c_str());
//         getline(iss, token, ',');
//         m.genre.push_back(token);
//         getline(iss, token, ',');
//         m.certificate = token;
//         getline(iss, token, ',');
//         m.run_time = token;
//         getline(iss, token, ',');
//         m.budget = atof(token.c_str());
//         getline(iss, token, ',');
//         m.box_office = atof(token.c_str());
//         getline(iss, token, ',');
//         m.casts.push_back(token);
//         getline(iss, token, ',');
//         m.directors.push_back(token);
//         movie.push_back(m);
//     }
//     return movie;
// }

// int main(int argc, char* argv[]){
//     // if(argc < 7){
//     //     cout << "Invaild it input" << endl;
//     //     exit(0);
//     // }

//     string path;
//     string directorName;
//     string actName;
//     string run_time;
    // for(int i=1; i<argc; i++){
    //     if(string(argv[i]) == string("-p")){
    //         path = argv[i+1];
    //     }
    //     if(string(argv[i]) == string("-i")){
    //         directorName = argv[i+1];
    //     }
    //     if(string(argv[i]) == string("-m")){
    //         actName = argv[i+1];
    //     }
    //     if(string(argv[i]) == string("-j")){
    //         run_time = argv[i+1];
    //     }
    // }

//     vector<Movie>movie = movies(path);

//     in_phim(movie, directorName);
//     dem(movie, run_time);
//     findp(movie, actName);



//     return 0;
// }


// BAI 1:

int main(int argc, char* argv[]){
    string s = "Hom nay, toi rat vui. Toi duoc di choi, duoc diem cao";
    string token;
    vector<int> count;
    vector<string> luu;
    istringstream iss(s);
    while(iss >> token){
        bool found = false;
        for(int i=0; i<luu.size(); i++){
            string y = luu[i];
            if(token == y){
                found = true;
                count[i]++;
                break;
            }
        }
        if(found == false){
            luu.push_back(token);
            count.push_back(1);
        }
    }

    for(int i=0; i<luu.size(); i++){
        cout << count[i];
    }
    return 0;
}
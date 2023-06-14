#include <iostream>
#include <vector>
using namespace std;
using std :: vector;

int main(int argc, char *argv[]){
    string word;
    vector <string> text;
    while(cin >> word){
        text.push_back(word);
    }

    for(auto s : text){
        cout << s << " ";
    }


    // vector <int> a;
    // for(int i=0; i != 10; i++){
    //     a.push_back(i);
    // }
    // for(auto c : a){
    //     cout << c << " " << endl;
    // }

}

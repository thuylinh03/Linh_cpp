#include<iostream>
#include<vector>

using namespace std;

template <typename T>
void in(T i){
    cout << i << endl;
}
template <typename T>
void in_vector(vector<T> vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " " << endl;
    }
    
}

template <typename T>
T find(T x, T y){
    if(x>y){
        cout << "Max = " << x << endl;
    }else{
        cout << "Max = " << y << endl;
    }
}

template <typename T, template <typename>  typename Container>
void in_all(Container<T> c){
    for(auto i : c){
        cout << i << " " << endl;
    }
}


int main(int argc, char* argv[]){
    in(1);
    in(3.5);
    vector<int> vec = {1,2,3};
    in_vector(vec);
    find(8,3);
    in_all(vec);
    
    //cout << find(string("Hello"), string("Wel"));
    return 0;
}
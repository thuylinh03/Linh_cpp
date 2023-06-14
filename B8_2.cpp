#include<iostream>
#include<string>
#include<istream>
#include<fstream>
#include<sstream>
#include<vector>
#include<math.h>

using namespace std;
struct Node{
    int id;
    double x,y;
};
int main(int argc, char*argv[]){
    if(argc<5){
        cout<<"Invaild it input\n";
        exit(0);
    }
    string path;
    int nodeID;
    for(int i=0;i<argc;i++){
        if(string(argv[i])==string("-i")){
            nodeID=stoi(argv[i+1]);
        }
        if(string(argv[i])==string("-p")){
            path = argv[i+1];
        }
    }
    ifstream infile;
    infile.open("coor.csv");
    vector<Node>Nodes;
    string line;
    getline(infile,line);
    while(getline(infile,line)){
        Node n;
        istringstream iss(line);
        string token;
        getline(iss,token,',');
        n.id=stoi(token);
        getline(iss,token,',');
        n.x = stod(token);
        getline(iss,token,',');
        n.y=stod(token);
        Nodes.push_back(n);
    }
    Node n;
    for(auto x : Nodes){
        if(x.id == nodeID){
            n=x;
            break;
        }
    }
    double max_kc=-99;
    int max_id=-1;
    for(auto & othNode : Nodes){
        if(nodeID == othNode.id) continue;
        double kc = sqrt((n.x-othNode.x)*(n.x-othNode.x)+(n.y-othNode.y)*(n.y-othNode.y));
        if(kc>max_kc){
            max_kc=kc;
            max_id=othNode.id;
        }
    }
    double min_kc=999;
    int min_id=999;
    for(auto & othNode : Nodes){
        if(nodeID == othNode.id) continue;
        double kc = sqrt((n.x-othNode.x)*(n.x-othNode.x)+(n.y-othNode.y)*(n.y-othNode.y));
        if(kc<min_kc){
            min_kc=kc;
            min_id=othNode.id;
        }
    }
    cout<<"Diem xa nhat: "<<endl;
    cout<<max_id<<" "<<max_kc<<endl;
    cout<<"Diem gan nhat: "<<endl;
    cout<<min_id<<" "<<min_kc<<endl;
}
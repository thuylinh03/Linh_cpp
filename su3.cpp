#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<istream>
#include<cmath>

using namespace std;

struct Company{
    int rank;
    string globalcp;
    string country;
    double sale,profit,assets,maketvl;
};

void outfile(vector<Company>companies, string countryName){
    countryName="China";
    ofstream outfile("countryName.csv");
    for(auto &x:companies){
        if(x.country==countryName){
            outfile<<x.rank<<" "<<x.globalcp<<" "<<x.country<<" "<<x.sale<<" "<<x.profit<<" "<<x.assets<<" "<<x.maketvl<<endl;
        }
    }
}

void findp(vector<Company>companies,double value){
    int count=0;
    value=pow(12,10);    // ham pow de tinh luy thua pow(12,10) = 12
    for(auto &x:companies){
        if(x.profit>value){
            count++;
            cout<<x.rank<<" "<<x.globalcp<<endl;
        }
    }
    cout<<"So cong ty co profit lon hon value la: "<<count<<endl;
}

void amp(vector<Company>companies){
    for(auto &x:companies){
        if(x.profit<0){
            cout<<x.rank<<" "<<x.globalcp<<endl;
        }
    }
}

vector<Company>incompanies(string & path){
    vector<Company>companies;
    ifstream infile;
    infile.open("forbes_companies_2022.csv");
    string line;
    getline(infile,line);
    while(getline(infile,line)){
        Company c;
        istringstream iss(line);
        string token;
        getline(iss,token,',');
        c.rank=stoi(token);
        getline(iss,token,',');
        c.globalcp=token;
        getline(iss,token,',');
        c.country=token;
        getline(iss,token,',');
        c.sale=atof(token.substr(1).c_str());
        getline(iss,token,',');
        c.profit=atof(token.substr(1).c_str());
        getline(iss,token,',');
        c.assets=atof(token.substr(1).c_str());
        getline(iss,token,',');
        c.maketvl=atof(token.substr(1).c_str());
        char last_c=token.back();
        if(last_c=='B'){
            c.sale*=1000000000;
            c.profit*=1000000000;
            c.assets*=1000000000;
            c.maketvl*=1000000000;
        }else if(last_c=='M'){
            c.sale*=1000000;
            c.profit*=1000000;
            c.assets*=1000000;
            c.maketvl*=1000000;
        }

        companies.push_back(c);
    }
    return companies;
}

int main(int argc, char*argv[]){
    if(argc<7){
        cout<<"Invaild it input\n";
        exit(0);
    }
    string path,countryName;
    double value;
    for(int i=0;i<argc;i++){
        if(string(argv[i])==string("-p")){
            path=argv[i+1];
        }
        if(string(argv[i])==string("-c")){
            countryName=argv[i+1];
        }
        if(string(argv[i])==string("-v")){
            value=stod(argv[i+1]);
        }
    }
    vector<Company>companies=incompanies(path);
    outfile(companies,countryName);

    cout<<"Danh sach cong ty co profit lon hon value:"<<endl;;
    findp(companies,value);

    cout<<"Danh sach cong ty co profit am la: "<<endl;
    amp(companies);
    
}
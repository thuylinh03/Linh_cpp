#pragma once
#include "ScoreNatural.cpp"
#include "ScoreSocial.cpp"

using namespace std;

int main(int argc, char* argv[]){
    vector<ScoreNatural> natural(3);
    natural[0] = ScoreNatural(9,10,10,8,9,9.5);
    natural[1] = ScoreNatural(8,8.5,9.6,8,8.5,9.5);
    natural[2] = ScoreNatural(10,8.7,9,9,8.9,10);

    for(auto x : natural){
        if(x.isPass()){
            x.display();
        }
        //x.display();
    }

    vector<ScoreSocial> social(3);
    social[0] = ScoreSocial(10,10,9.8,8,9,9.5);
    social[1] = ScoreSocial(8.6,8.5,9.6,8.8,8.5,9.5);
    social[2] = ScoreSocial(10,9.5,9.2,9,8.9,10);

    for(auto x : social){
        cout << x.avgPoint() << endl;
    }

    vector<Score *> scores({&natural[0], &natural[1], &social[0]});
    for (auto &v : scores)
        v->avgPoint();

    cout << "Trung binh lon nhat:" << Score::getMaxAvg(scores) << endl;
    cout << "Trung binh nho nhat:" << Score::getMinAvg(scores) << endl;
    cout << "Trung binh lon nhat khoi A:" << Score::getMaxPointA(scores) << endl;
    cout << "Trung binh lon nhat khoi B:" << Score::getMaxPointB(scores) << endl;
    cout << "Trung binh lon nhat khoi C:" << Score::getMaxPointC(scores) << endl;
    cout << "Trung binh lon nhat khoi D:" << Score::getMaxPointD(scores) << endl;

}
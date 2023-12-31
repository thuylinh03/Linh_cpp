#include<iostream>
#include<string>
#include<vector>
#include "Score.cpp"

using namespace std;

class ScoreSocial : public Score{
    private: 
        double ce;
        double geography;
        double history;
    
    public:
        ScoreSocial(){}

        ScoreSocial(double math, double literature, double english, double ce, double geography, double history) : Score(math, literature, english), ce(ce), geography(geography), history(history){}

        double pointC(){
            return literature + history + geography;
        }

        double pointScoreSocial(){
            return literature + history + geography;
        }

        double avgPoint(){
            return (literature + history + geography + math + literature + english)/6;
        }

        double getCe(){
            return ce;
        }

        double getGeography(){
            return geography;
        }

        double getHistory(){
            return history;
        }
        
};
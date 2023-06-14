#include<iostream>
#include<vector>
#include<string>
#include "Score.cpp"
using namespace std;

class ScoreNatural : public Score{
    private:
        double physic;
        double chemistry;
        double biology;

    public:
        ScoreNatural(){}

        ScoreNatural(double math, double literature, double english, double physic, double chemistry, double biology) : Score(math, literature, english), physic(physic), chemistry(chemistry), biology(biology){

        }

        double PointA(){
            return math + physic + chemistry;
        }

        double PointB(){
            return math + chemistry + biology;
        }

        double pointNatural(){
            return PointA() + PointB();
        }

        double avgPoint(){
            return pointNatural()/6;
        }

        double getPhysic(){
            return physic;
        }

        double getChemistry(){
            return chemistry;
        }

        double getBiology(){
            return biology;
        }
};
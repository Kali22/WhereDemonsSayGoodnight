#include "GeneralHead.hpp"

using namespace std;

square::square(){
        existing=false;
}

square::square(short int from){
        for(int i = 0; i < 4; i++){
            rose[i]=true;
        }
        fromWhere=from;
        existing=true;
    }

square::square(short int from, bool N, bool E, bool W, bool S){
        rose[0]=N;
        rose[1]=E;
        rose[2]=W;
        rose[3]=S;
        fromWhere=from;
        existing=true;
}


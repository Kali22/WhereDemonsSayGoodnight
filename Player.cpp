#include "GeneralHead.hpp"

#include<cmath> //sqrt()
#include<iostream>

using namespace std;

player::player(){
    x=50; y=50;
    exp=0; lvl=1;
    hp=100;
    lastlvlgap=1; nextlvlgap=5;
}

void player::addexp(int a){
    exp+=a;
    if(exp>=nextlvlgap){
        lvl++;
        cout << "\nCongratulations, you've reached lvl " << lvl << ".\n";
        lastlvlgap=nextlvlgap; //... wlasciwie nie wiem po co... nie pamietam :P
        nextlvlgap=(int)(nextlvlgap*(1+sqrt(2))); //(int) niepotrzebne :P
    }
}

void player::printPosition(){
        cout << "\n X: " << x << " Y:" << y << endl;
}

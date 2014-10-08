/*  A Huge part of this code (and code in other files) was made by Kali (BB)    *
 *  Splitting up one piece of code into other files - by Voicer (KW)            *
 *  To do: Monsters. And fight system, certainly                                */

#include "GeneralHead.hpp"
#include "Square.cpp"
#include "Player.cpp"
#include "General.cpp"
//testGitHuba
#include <iostream>
#include<stdlib.h> //komendy konsoli
#include<cstdlib> //rand()
#include<vector> // vector<>
#include<ctime> //time()

using namespace std;

int main(){
    //ustawienie
    set();
    //ustalenie rozmiaru mapy (drugiego wymiaru) poprzez ustalenie wielkosci kazdego z wewnetrznych wektorow
    for(int i = 0; i < 100; i++){
        map[i].resize(100);
//        for(int j = 0; j < 100; j++){
//            map[i][j].existing=false;
//        }
//niepotrzebne zerowanie, w konstruktorze jest false i (zdaje się) działa
    }

//do randomizerów (jeszcze nie ma, byc mo¿e nie bêdzie) - decyzja D&D / RPG
    srand(time(NULL));
//pocz¹tkowe pole; praca w toku
    map[P.x][P.y]=square();
    //char u¿ywany przez du¿o ró¿nych funkcji
    char c='0';
    //pierwszy ekran
    ShowStart();
//zasadnicza gra :P; praca oczywiœcie w toku
    while(c!='x'){
        cin >> c;
        Show(&c);
        //wyswietlanie zaleznie od kierunku nadejscia
        move(getDir(c)); //ruch (i tworzenie nowych)
        P.addexp(P.lvl); // takie tam dwa dla sprawdzania, czy wszystko ok
        P.printPosition();

    }

    return 0;
}

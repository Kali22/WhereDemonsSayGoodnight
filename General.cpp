#include "GeneralHead.hpp"

#include<iostream>
#include<stdlib.h> //komendy konsoli
#include<cmath> //sqrt()
#include<vector> // vector<>

using namespace std;

//globalne mapa (wektor wektorow obiektów [wstepna wielkosc 100]) i player
vector < vector<square> > map (100);
player P;
// Mapa Mapa Mapa @up

//czyszczenie konsoli + ustawianie konsoli
void clear(){
    system("cls");
}

void set(){
    system("title Where Demons Say Good Night");
    system("color 04");
}

//FUNKCJE PODSTAWOWE - w mainie

void Show(char *c){
    bool good = (*c=='w'||*c=='s'||*c=='a'||*c=='d');
    if(good){
        clear();
        cout << "         |         |         \n         |         |         \n         |    ";
        if(*c=='s') {cout << 'v';} else {cout << ' ';};
        cout << "    |         \n         |         |         \n_________|         |_________\n                             \n                             \n    ";
        if(*c=='d') {cout << '>';} else{cout << ' ';};
        cout << "                  ";
        if(*c=='a') {cout << '<';} else{cout << ' ';};
        cout << "    \n                             \n_________           _________\n         |         |         \n         |         |         \n         |    ";
        if(*c=='w') {cout << '^';} else{cout << ' ';};
        cout << "    |         \n         |         |         \n         |         |         \n";
    } else {
        cout << "\nWrong direction. Try w, s, a or d\n";
        cin >> *c;
        Show(c);
    }
}

void ShowStart(){
    cout << "         |         |         \n         |         |         \n         |    w    |         \n         |         |         \n_________|         |_________\n                             \n                             \n    a         X         d    \n";
    cout << "                             \n_________           _________\n         |         |         \n         |         |         \n         |    s    |         \n         |         |         \n         |         |         \n";
}

short int getDir(char c){
    if(c=='w') return 0;
    if(c=='d') return 1;
    if(c=='a') return 2;
    if(c=='s') return 3;
    cout << "\nWrong direction. Try w, s, a or d\n";
    cin >> c;
    return getDir(c);
}

void move(short int dir){
    short int changeToX=0, changeToY=0;
    if(dir==0){changeToY=1;}
    if(dir==3){changeToY=-1;}
    if(dir==1){changeToX=1;}
    if(dir==2){changeToX=-1;}
    P.x+=changeToX; P.y+=changeToY;
    //ustalanie, gdzie po wspolrzednych sie poruszy

    //nie ma? zrób (z odpowiednim konstruktorem; tu to wszystko, randomizer sprawdzenie, czy nie granica mapy itd), jest? nie tykaj. (do napisania wyswietlenie wczesniej istniejacego pola)
    if(!map[P.x][P.y].existing){
        map[P.x][P.y].existing=true;
        cout << "\nCreated square\n";
    } else {
        cout << "\nPlayer already was here\n";
    }

}

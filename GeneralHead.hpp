#ifndef GeneralHead_hpp
#define GeneralHead_hpp

void set();
void clear();

void Show(char *c);
void ShowStart();

void move(short int dir);
short int getDir(char c);

//Gracz

class player{
    public:

    int x, y;
    int exp, lvl;
    int hp;
    int lastlvlgap, nextlvlgap;
    player();
    void addexp(int a);

    void printPosition();
};

//Pole

class square{
    public:
//CZY istnieje droga w tê stronê; Czy istnieje to pole.
    bool rose[4], existing;
    short int fromWhere; //dir,from, ju¿ w formie liczby; wszystko zgodnie z roza ponizej
//  0, 1, 2, 3
//  N, E, W, S
    square(); //konstruktor domyslny, uzywany przy tworzeniu tablicy(wektora wektorów) (przynajmniej w za³o¿eniu :P)
    square(short int from); //obecnie uzywany, docelowo ten ponizej
    square(short int from, bool N, bool E, bool W, bool S);

};

#endif // GeneralHead_hpp

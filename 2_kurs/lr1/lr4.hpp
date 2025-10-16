#include <iostream>

using namespace std;

class Base_figur{
protected:
    string name;
    int x0;
    int y0;
    int l;
    void proverka(int &l);
};

class Kvadrat : public Base_figur{
public:
    Kvadrat(){
        name="Kvadrat";
        x0=0;
        y0=0;
        l=1;
    }
    Kvadrat(int _x0, int _y0, int _l){
        name = "Kvadrat";
        x0=_x0;
        y0=_y0;
        l=_l;
        proverka(l);
    }
    int ploshad(int x0, int y0, int l);
    int perimetr(int x0, int y0, int l);

};

class Crug : public Base_figur{

};

void Base_figur::proverka(int &l){
    if (l<=0) l=1;
}
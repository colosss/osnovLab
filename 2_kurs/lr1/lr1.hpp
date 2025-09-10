#include <iostream>

class yravnenie{
private:
    double k=0;
    double b=0;
    double x=0;
public: 
    void setk();
    void setb();
    void setx();
    double getk();
    double getb();
    double getx();
    double solve();
};
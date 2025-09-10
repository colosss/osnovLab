#include "lr1.hpp"

using namespace std;

void yravnenie::setk(){
    cout<<"Vvedite k"<<endl;
    cin>>yravnenie::k;
}

void yravnenie::setb(){
    cout<<"Vvedite b"<<endl;
    cin>>yravnenie::b;
}
void yravnenie::setx(){
    cout<<"Vvedite x"<<endl;
    cin>>yravnenie::x;
}

double yravnenie::solve(){
    return k*x+b;
}
double yravnenie::getk(){
    return yravnenie::k;
}

double yravnenie::getb(){
    return yravnenie::b;
}
double yravnenie::getx(){
    return yravnenie::x;
}

int main(){
    yravnenie y1;
    y1.setb();
    y1.setk();
    y1.setx();
    cout<<"B = "<<y1.getb()<<" K = "<<y1.getk()<<" X = "<<y1.getx()<<  endl;
    cout<<"Yravnenie y=kx+b : y="<<y1.getk()<<"*"<<y1.getx()<<"+"<<y1.getb()<<endl;
    cout<<"Otevet = "<<y1.solve()<<endl;
}
#include <iostream>
#include <cmath>

//Nomer po jurnaly
int nn = 12;

//Peremenay collichestva variantov
int K;

//Peremenay conechnogo resultata
int N;

int main()
{   
    std::cout<<"Введите номер по журналу\n";
    std::cin>>nn;
    std::cout<<"Введите колличество вариантов\n";
    std::cin>>K;
    N = (nn-1)%K+1;
    std::cout<<"Номер работы "<<N<<std::endl;
    
    
}
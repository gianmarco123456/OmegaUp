#include <iostream>
using namespace std;
unsigned long long int F,C,K,X,Y;

unsigned long long int binaria(){
    unsigned long long int ini,fin,m,r;
    ini=0;
    fin=F*C-1;
    while(ini<fin){
        m=(ini+fin)/2+1;
        r=m/C;
        if(X*(m-r)+(r*Y)<=K) ini=m;
        else fin=m-1;
    }
    return ini+1;
}

int main()
{
    cin>>F>>C>>K>>X>>Y;
    if(X>Y){
        swap(X,Y);
        swap(F,C);
    }
    cout<<binaria()<<'\n';

    return 0;
}

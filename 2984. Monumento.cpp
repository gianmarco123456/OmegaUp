#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,cont,c;
    cin>>n;
    a=1;
    b=2;
    cont=3;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==2){
        cout<<2;
        return 0;
    }
    while(cont<=n){
        c=a+b;
        c=c%1000000;
        a=b;
        b=c;
        cont++;
    }
    c=c%1000000;
    cout<<c;

    return 0;
}

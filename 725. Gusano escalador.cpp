#include <bits/stdc++.h>
using namespace std;
int n,u,d,suma,minutos;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>u>>d;
    suma=0; minutos=0;
    while(suma<n){
        suma+=u;
        minutos++;
        if(suma>=n)break;
        suma-=d;
        minutos++;
    }
    cout<<minutos<<'\n';

    return 0;
}

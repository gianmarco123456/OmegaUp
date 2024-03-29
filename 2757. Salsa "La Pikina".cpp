#include <bits/stdc++.h>
using namespace std;
struct botellas{
     long long int n,m;
};
botellas mayor;
long long int n,i,k,ini,fin,rango,alcance,diferencia,suma;
long long int salsa[2000002];

void lectura_precalculo(){
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>salsa[i];
    }
    sort(salsa+1,salsa+n+1);
    for(i=2;i<=n;i++){
        salsa[i]+=salsa[i-1];
    }
}

void calculo(){
    ini=n-1; fin=n;
    while(ini>=1){
        rango=fin-(ini-1);
        alcance=salsa[fin]-salsa[fin-1];
        rango=alcance*rango;
        diferencia=salsa[fin]-salsa[ini-1];
        suma=rango-diferencia;
        if(mayor.n<=fin-(ini-1) and suma<=k){
            rango=fin-(ini-1);
            mayor.n=rango;
            mayor.m=alcance;
        }
        if(suma<=k){
            ini--;
        }else{
            fin--;
        }
    }
    cout<<mayor.n<<" "<<mayor.m<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    lectura_precalculo();
    mayor.n=1; mayor.m=salsa[n]-salsa[n-1];
    calculo();

    return 0;
}

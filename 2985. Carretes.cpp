#include <bits/stdc++.h>
using namespace std;
int i;

int menor(char ini[],char fin[]){
    int inicio;
    int suma=0;
    int suma1=0;
    inicio=ini[i];
    while(ini[i]!=fin[i]){
        if(ini[i]>'9'){
            ini[i]='0';
        }else{
            ini[i]=ini[i]+'';
            suma++;
        }
    }
    ini[i]=inicio;
    while(ini[i]!=fin[i]){
        if(ini[i]<'0'){
            ini[i]='9';
        }else{
            ini[i]=ini[i]-'';
            suma1++;
        }
    }
    if(suma<suma1){
        return suma;
    }else{
        return suma1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    int r;
    int resultado=0;
    char inicio[202];
    char fin[202];
    cin>>n;
    i=1;
    while(i<=n){
        cin>>inicio[i];
        i++;
    }
    i=1;
    while(i<=n){
        cin>>fin[i];
        i++;
    }
    i=1;
    while(i<=n){
        r=menor(inicio,fin);
        resultado=resultado+r;
        i++;
    }
    cout<<resultado;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int i,k,n,contt,minutos,suma;
int s[1002],t[1002],r[1002];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    i=1;
    while(i<=k){
        cin>>s[i]>>t[i]>>r[i];
        i=i+1;
    }
    i=1;
    while(i<=k){
        suma=0;
        contt=1;
        minutos=0;
        while(suma<n){
            if(contt<=t[i]){
                suma=suma+s[i];
                contt=contt+1;
                minutos=minutos+1;
            }
            if(suma>=n){
            }else{
                if(contt>t[i]){
                    contt=1;
                    minutos=minutos+r[i];
                }
            }
        }
        cout<<minutos<<endl;
        i=i+1;
    }

    return 0;
}

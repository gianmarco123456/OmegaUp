#include <bits/stdc++.h>
using namespace std;
long long int f,c,cont,resi,resta,suma;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>f>>c;
    cont=0; resi=1;
    while(resi!=0){
        if(f>c){
            suma=(f/c);
            resi=f%c;
            resta=c*suma;
            f-=resta;
        }else{
            suma=(c/f);
            resi=c%f;
            resta=f*suma;
            c-=resta;
        }
        cont+=suma;
    }
    cout<<cont<<'\n';

    return 0;
}

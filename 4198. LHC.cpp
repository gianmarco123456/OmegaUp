#include <bits/stdc++.h>
using namespace std;
struct particulas{
    long long int x,v;
    const bool operator<(const particulas &otro)const{
        return x<otro.x;
    }
};
particulas part[500000];
int n;
void lectura(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>part[i].x>>part[i].v;
    sort(part+1,part+n+1);
}

bool tiempo(double seg){
    double minimo;
    bool existente=false;
    for(int i=1;i<=n;i++){
        if(part[i].v<0 ){
            if(existente and double(part[i].x+(part[i].v*seg)) <minimo) return true;
        }
        else{
            if(!existente){
                existente=true;
                minimo=double(part[i].x+(part[i].v*seg));
            }else{
                if(double(part[i].x+(part[i].v*seg))>minimo) minimo=double(part[i].x+(part[i].v*seg));
            }
        }
    }
    return false;
}

double binaria(){
    double ini,fin,mit;
    bool choques;
    ini=0; fin=500000000;
    while(fin-ini>0.000001){
        mit=double((ini+fin)/2);
        choques=tiempo(mit);
        if(!choques) ini=mit+0.000001;
        else fin=mit;
    }
    mit=double((ini+fin)/2);
    return mit;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    lectura();
    cout<<fixed;
    if(!tiempo(500000000)) cout<<"-1"<<'\n';
    else cout<<binaria()<<'\n';

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
struct posicion{
    int f,c;
};
short mov[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
queue<posicion>cola;
posicion A,B;
int F,C;
bool obstaculo[52][52];
int distancia[52][52];

void lectura(){
    cin>>F>>C;
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            cin>>obstaculo[i][j];
        }
    }
    cin>>A.f>>A.c;
    cin>>B.f>>B.c;
}

bool borde(posicion &p){
    if(p.f>=0 and p.f<F and p.c>=0 and p.c<C) return true;
    return false;
}

int mapeo(){
    if(A.f==B.f and A.c==B.c) return 1;
    posicion actual,copia;
    distancia[A.f][A.c]=1;
    cola.push(A);
    while(!cola.empty()){
        actual=cola.front(); cola.pop();
        for(int i=0;i<4;i++){
            copia=actual;
            copia.f+=mov[i][0];
            copia.c+=mov[i][1];
            if(borde(copia) and !obstaculo[copia.f][copia.c] and distancia[copia.f][copia.c]==0){
                distancia[copia.f][copia.c]=distancia[actual.f][actual.c]+1;
                if(B.f==copia.f and B.c==copia.c) return distancia[copia.f][copia.c];
                cola.push(copia);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    lectura();
    cout<<mapeo()<<'\n';

    return 0;
}

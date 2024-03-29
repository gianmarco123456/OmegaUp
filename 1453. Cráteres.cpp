#include <bits/stdc++.h>
using namespace std;
struct nodo{
    int f,c;
};
int movs[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int f,c;
int mapa[502][502];
bool visitados[502][502];
queue<nodo>cola;

void lectura(){
    cin>>f>>c;
    for(int i=1;i<=f;i++){
        for(int j=1;j<=c;j++){
            cin>>mapa[i][j];
        }
    }
}

bool valido(nodo r){
    if(r.f>=1 and r.f<=f and r.c>=1 and r.c<=c and mapa[r.f][r.c]>0 and !visitados[r.f][r.c]){
        return true;
    }
    return false;
}

int calcular(int i,int j){
    nodo actual,copia;
    int ret=0;
    visitados[i][j]=1;
    cola.push({i,j});
    while(! cola.empty()){
        actual=cola.front(); cola.pop();
        ret+=mapa[actual.f][actual.c];
        for(int i=0;i<4;i++){
            copia=actual;
            copia.f+=movs[i][0];
            copia.c+=movs[i][1];
            if(valido(copia)){
                visitados[copia.f][copia.c]=1;
                cola.push(copia);
            }
        }
    }
    return ret;
}

void busqueda(){
    int cual,mayor,n,posible;
    cual=0; mayor=0; n=0;
    for(int j=1;j<=c;j++){
        for(int i=1;i<=f;i++){
            if(mapa[i][j]>0 and !visitados[i][j]){
                n++;
                posible=calcular(i,j);
                if(posible>mayor){
                    cual=n;
                    mayor=posible;
                }
            }
        }
    }
    cout<<cual<<" "<<mayor<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    lectura();
    busqueda();

    return 0;
}

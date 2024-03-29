#include <stack>
#include <iostream>
using namespace std;
int nodo[1000002];
int alcanze[1000002];
bool visitado[1000002];
stack<int> pila;
int n;

void Lectura(void){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>nodo[i];
    }
}

int LeerMente(int actual){
    int nodoRepetido=0;
    int ciclo=1;
    while(true){
        pila.push(actual);
        alcanze[actual]=ciclo;
        ciclo++;
        if(visitado[nodo[actual]]){
            ciclo=alcanze[nodo[actual]]+1;
            break;
        }else if(!visitado[nodo[actual]] and alcanze[nodo[actual]]!=0){
            ciclo=alcanze[actual]-alcanze[nodo[actual]]+1;
            nodoRepetido=nodo[actual];
            break;
        }
        actual=nodo[actual];
    }
    while(!pila.empty()){
        actual=pila.top(); pila.pop();
        visitado[actual]=true;
        alcanze[actual]=ciclo;
        if(nodoRepetido==0) ciclo++;
        else if(pila.top()==nodoRepetido) nodoRepetido=0;
    }
    return alcanze[actual];
}

int Calculo(void){
    int posible,mayor;
    mayor=0;
    for(int i=1;i<=n;i++){
        if(!visitado[i]){
            posible=LeerMente(i);
            if(posible>mayor) mayor=posible;
        }
        ///cout<<alcanze[i]<<" ";
    }
    return mayor;
}

int main(void)
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    Lectura();
    cout<<Calculo();

    return 0;
}

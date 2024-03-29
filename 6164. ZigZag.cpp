#include <bits/stdc++.h>
using namespace std;
struct abecedario{
    int sig=0;
    int fin=-1;
    vector<string> palabras;
};
int cont=0;
abecedario lista[28];
int n,k;

void agregar(int j,string palabra){
    lista[j].fin++;
    lista[j].palabras.push_back(palabra);
}
void ordenar(){
    for(int i=1;i<=26;i++){
        if(lista[i].fin>=1){
            sort(lista[i].palabras.begin(),lista[i].palabras.end());
        }
    }
}
void mostrar(char letra){
    int cual;
    cual=letra-96;
    cont++;
    cout<<lista[cual].palabras[lista[cual].sig]<<'\n';
    lista[cual].sig++;
    if(lista[cual].sig>lista[cual].fin) lista[cual].sig=0;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string palabra;
    int j;
    char letra;
    cin>>k>>n;
    for(int i=1;i<=k;i++){
        cin>>palabra;
        j=(palabra[0]-96);
        agregar(j,palabra);
    }
    ordenar();
    for(int i=1;i<=n;i++){
        cin>>letra;
        mostrar(letra);
    }

    return 0;
}

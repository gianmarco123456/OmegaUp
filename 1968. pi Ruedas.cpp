#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string conf,actual,nuevo,aux;
    int i,n;
    map<string,int>pro;
    map<string,int>cont;
    queue<string>cola;
    getline(cin,conf);
    cola.push(conf);
    cont[conf]=0;
    getline(cin,conf);
    cin>>n;
    for(i=0;i<=n;i++){
        getline(cin,aux);
        pro[aux]=1;
    }
    while(! cola.empty()){
        actual=cola.front();
        cola.pop();
        if(actual==conf){
            cout<<cont[actual];
            return 0;
        }
        i=0;
        while(i<=6){
            nuevo=actual;
            nuevo[i]=nuevo[i]+1;
            if(nuevo[i]>57){
                nuevo[i]=48;
            }
            if(pro[nuevo]!=1){
                cola.push(nuevo);
                cont[nuevo]=cont[actual]+1;
                pro[nuevo]=1;
            }
            nuevo=actual;
            nuevo[i]=nuevo[i]-1;
            if(nuevo[i]<48){
                nuevo[i]=57;
            }
            if(pro[nuevo]!=1){
                cola.push(nuevo);
                cont[nuevo]=cont[actual]+1;
                pro[nuevo]=1;
            }
            i=i+2;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}

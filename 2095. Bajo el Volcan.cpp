#include <bits/stdc++.h>
using namespace std;
struct aux{
    int f;
    int c;
};
struct orden{
    queue<char>c;
    queue<char>f;
};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m,n,inic,inif,j,i;
    orden cola;
    aux actual;
    char volcan[102][102];
    scanf("%d%d",&m,&n);
    scanf("%d%d",&inic,&inif);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&volcan[i][j]);
        }
    }
    cola.c.push(inic);
    cola.f.push(inif);
    while(! cola.c.empty() and ! cola.f.empty()){
        actual.c=cola.c.front();cola.c.pop();
        actual.f=cola.f.front();cola.f.pop();
            if(volcan[actual.c][actual.f]>volcan[actual.c+1][actual.f] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
                and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c+1);
                cola.f.push(actual.f);
            }
            if(volcan[actual.c][actual.f]>volcan[actual.c-1][actual.f] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
               and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c-1);
                cola.f.push(actual.f);
            }
            if(volcan[actual.c][actual.f]>volcan[actual.c][actual.f+1] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
               and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c);
                cola.f.push(actual.f+1);
            }
            if(volcan[actual.c][actual.f]>volcan[actual.c][actual.f-1] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
               and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c);
                cola.f.push(actual.f-1);
            }
            if(volcan[actual.c][actual.f]>volcan[actual.c+1][actual.f+1] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
               and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c+1);
                cola.f.push(actual.f+1);
            }
            if(volcan[actual.c][actual.f]>volcan[actual.c-1][actual.f-1] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
               and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c-1);
                cola.f.push(actual.f-1);
            }
            if(volcan[actual.c][actual.f]>volcan[actual.c+1][actual.f-1] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
               and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c+1);
                cola.f.push(actual.f-1);
            }
            if(volcan[actual.c][actual.f]>volcan[actual.c-1][actual.f+1] and actual.c>0 and actual.c<=m and actual.f>0 and actual.f<=n
               and volcan[actual.c][actual.f]<=57){
                cola.c.push(actual.c-1);
                cola.f.push(actual.f+1);
            }
            volcan[actual.c][actual.f]='X';
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(volcan[i][j]=='X') printf("%c ",volcan[i][j]);
            else printf("%d ",volcan[i][j]);
        }
        printf("\n");
    }

    return 0;
}

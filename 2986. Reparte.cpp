#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,n,i,s,valor,a,r;
    cin>>p>>n;
    s=0;
    i=1;
    while(i<=n){
        cin>>valor;
        s=s+valor;
        i++;
    }
    a=s/p;
    r=a*p;
    r=s-r;
    cout<<a<<" "<<r;

    return 0;
}

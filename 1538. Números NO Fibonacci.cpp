#include <bits/stdc++.h>
using namespace std;
int n,a,b,i,x;
int r[30002];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    a=1; b=2; r[1]=2; i=2;
    while(i<n){
        r[i]=a+b;
        a=b;
        b=r[i];
        i=i+1;
    }
    i=1; x=2;
    while(x<n){
        if(r[i]!=x){
            cout<<x<<" ";
            x=x+1;
        }else{
            i=i+1;
            x=x+1;
        }
    }
    return 0;
}

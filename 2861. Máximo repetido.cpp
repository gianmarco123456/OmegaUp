#include <iostream>
using namespace std;
int n,num,mayor,cuantos;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    mayor=-1000000;
    cuantos=0;
    for(int i=1;i<=n;i++){
        cin>>num;
        if(num>mayor){
            mayor=num;
            cuantos=1;
        }else if(num==mayor) cuantos++;
    }
    cout<<cuantos<<'\n';

    return 0;
}
/// xD

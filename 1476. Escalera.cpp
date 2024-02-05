#include <bits/stdc++.h>
using namespace std;
//Compiler version g++ 6.3.0
int n,k;
long long int memo[10002];

long long int f(){
    long long int suma=1;
	for(int i=n-1;i>=0;i--){
		memo[i]+=suma;
        suma-=memo[i+k];
		suma+=memo[i];
	}
	return memo[0];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>k;
	memo[n]=1;
	cout<<f()<<'\n';

	return 0;
}

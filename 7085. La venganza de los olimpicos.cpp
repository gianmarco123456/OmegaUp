#include <iostream>
unsigned long long int N,K,a,b,res;

int main(void)
{
    scanf("%lld%lld",&N,&K);
    a=N; b=N+1;
    if(N%2==0) a/=2;
    else b/=2;
    res=a*b;
    if(res>=K) printf("Los olimpicos seran millonarios\n");
    else printf("Ya valieron los olimpiquitos\n");

    return 0;
}

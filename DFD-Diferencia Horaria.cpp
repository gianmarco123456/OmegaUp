#include<bits/stdc++.h>
using namespace std;
struct hors{
	int hor,min;
};
int horas,minutos;
hors origen,destino;

void lectura(){
	cin>>origen.hor>>origen.min>>destino.hor>>destino.min;
}

void diferencia(){
	if(origen.min>destino.min){
		horas=-1;
		minutos=60-(origen.min-destino.min);
	}else{
		minutos=destino.min-origen.min;
		horas=0;
	}
	do{
		horas++;
		origen.hor=(origen.hor+1)%24;
	}while(origen.hor!=destino.hor);
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	lectura();
	diferencia();
	cout<<horas<<'\n'<<minutos<<'\n';
}

#include <iostream>
#include <tgmath.h> 
using namespace std;
struct RODILLO{
  int x,y,r;
  bool f;
};
RODILLO rodillo[1082];
int n,ini;

void Read(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>rodillo[i].x>>rodillo[i].y>>rodillo[i].r;
    if(rodillo[i].x==0 and rodillo[i].y==0) ini=i;
  }
}

void Compute(){
  int remaining,current,distance;
  rodillo[ini].f=true;
  remaining=n-1;
  current=ini;
  while(remaining){
    for(int i=1;i<=n;i++){
      if(!rodillo[i].f){
        distance=((rodillo[i].x-rodillo[current].x)*(rodillo[i].x-rodillo[current].x));
        distance+=((rodillo[i].y-rodillo[current].y)*(rodillo[i].y-rodillo[current].y));
        distance=sqrt(distance);
        if(distance==(rodillo[i].r+rodillo[current].r)){
          rodillo[i].f=true;
          current=i;
          remaining--;
        }
      }
    }
  }
  cout<<rodillo[current].x<<" "<<rodillo[current].y<<'\n';
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  Read();
  Compute();

}

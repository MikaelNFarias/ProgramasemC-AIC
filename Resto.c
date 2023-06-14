#include <stdio.h>
#include <math.h>

void Resto(int X, int Y) {
    int t=0;
    if(X>Y){
      t=Y;
      Y=X;
      X=t;
    }
  int i = X+1;
  while(i<Y){
    if(i%5==2 || i%5==3){
      printf("%d\n",i);
      i++;
    }
    else{
      i++;
    }
  }
}

int main() {
   int X,Y=0;
   scanf("%d",&X);
   scanf("%d",&Y); 
   Resto(X,Y);
}

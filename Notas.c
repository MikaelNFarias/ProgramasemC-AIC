#include <stdio.h>
#include <math.h>

int Valida(float a){
  if(a<=10 && a>=0){
    return 1;
  } 
  else{
    printf("nota invalida\n");
    return 0;
  }
}

int media(float a, float b, float md){
  md=(a+b)/2;
  return printf("media = %.2f\n",md);
}

int main() {
  int d=1;
  while(d=1){
    float a,b=0;
    float md=0;
    scanf("%f",&a);
    int code = Valida(a);
    while(code==0){
      scanf("%f",&a);
      code = Valida(a);
    }
    scanf("%f",&b);
    code = Valida(b);
    while(code==0){
      scanf("%f",&b);
      code = Valida(b);
    } 
    if(code==1){
      media(a,b,md);
    }
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&d);
    while(d!=1 && d!=2){
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d",&d);
    }
    if(d==2){
      break;
    }
  }
}



#include <stdio.h>

int CoordPonto(float x, float y){
  if(x==0 && y==0){
    return printf("Origem");
  }
  else if(x>0 && y>0){
    return printf("Q1");
  }
  else if(x<0 && y>0){
    return printf("Q2");
  }
  else if(x<0 && y<0){
    return printf("Q3");
  }
  else if(x>0 && y<0){
    return printf("Q4");
  }
  else if(x==0.0 && y!=0.0){
    return printf("Eixo Y");
  }
  else if(x!=0.0 && y==0.0){
    return printf("Eixo X");
  }
}
int main() {
  float x, y = 0.0;
  scanf("%f %f", &x, &y);
  CoordPonto(x,y);
  return 0;
}
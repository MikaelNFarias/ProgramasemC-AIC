#include <stdio.h>

int Mes(int A){
  if(A==1){
    return printf("January\n");
  }
  else if(A==2){
    return printf("February\n");
  }
  else if(A==3){
    return printf("March\n");
  }
  else if(A==4){
    return printf("April\n");
  }
  else if(A==5){
    return printf("May\n");
  }
  else if(A==6){
    return printf("June\n");
  }
  else if(A==7){
    return printf("July\n");
  }
  else if(A==8){
    return printf("August\n");
  }
  else if(A==9){
    return printf("September\n");
  }
  else if(A==10){
    return printf("October\n");
  }
  else if(A==11){
    return printf("November\n");
  }
  else if(A==12){
    return printf("December\n");
  } 
  
}
int main() {
  int A = 0;
  scanf("%d", &A);
  Mes(A);
  return 0;
}

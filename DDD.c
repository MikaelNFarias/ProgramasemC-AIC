#include <stdio.h>

int DDD(float A){
  if(A==61){
    return printf("Brasilia\n");
  }
  else if(A==71){
    return printf("Salvador\n");
  }
  else if(A==11){
    return printf("Sao Paulo\n");
  }
  else if(A==21){
    return printf("Rio de Janeiro\n");
  }
  else if(A==32){
    return printf("Juiz de Fora\n");
  }
  else if(A==19){
    return printf("Campinas\n");
  }
  else if(A==27){
    return printf("Vitoria\n");
  }
  else if(A==31){
    return printf("Belo Horizonte\n");
  }
  else{
    return printf("DDD nao cadastrado\n");
  }
  
  
}
int main() {
  int A = 0;
  scanf("%d", &A);
  DDD(A);
  return 0;
}

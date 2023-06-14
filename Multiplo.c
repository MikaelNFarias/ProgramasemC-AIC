#include <stdio.h>

int Multiplo(int A, int B){
  if(B>=A){
    if(B%A==0){
      return printf("Sao Multiplos\n");
    }
    else{
      return printf("Nao sao Multiplos\n");
    }
  }
  if(A>B){
    if(A%B==0){
      return printf("Sao Multiplos\n");
    }
    else{
      return printf("Nao sao Multiplos\n");
    }
  }
}
int main() {
  int A, B = 0;
  scanf("%d %d", &A, &B);
  Multiplo(A,B);
  return 0;
}
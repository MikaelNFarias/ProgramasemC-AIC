#include <stdio.h>

int TempJogo(int A, int B){
  if(A>B){
    int t1=24-A;
    int tf=B+t1;
    return printf("O JOGO DUROU %d HORA(S)\n", tf);
  }
  if(B>A){
    int tf=B-A;
    return printf("O JOGO DUROU %d HORA(S)\n", tf);
  }
  if(B==A){
    return printf("O JOGO DUROU 24 HORA(S)\n");
  }
  
}
int main() {
  int A, B = 0;
  scanf("%d %d", &A, &B);
  TempJogo(A,B);
  return 0;
}

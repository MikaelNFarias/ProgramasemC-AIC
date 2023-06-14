#include <stdio.h>

int AumentoSalario(float A){
  if(A>=0 && A<=400.00){
    float DF=A*0.15;
    float NS=A*1.15;
    return printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n", NS, DF);
  }
  if(A>400.00 && A<=800.00){
    float DF=A*0.12;
    float NS=A*1.12;
    return printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n", NS, DF);
  }
  if(A>800.00 && A<=1200.00){
    float DF=A*0.10;
    float NS=A*1.10;
    return printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n", NS, DF);
  }
  if(A>1200.00 && A<=2000.00){
    float DF=A*0.07;
    float NS=A*1.07;
    return printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n", NS, DF);
  }
  if(A>2000.00){
    float DF=A*0.04;
    float NS=A*1.04;
    return printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n", NS, DF);
  }
}
int main() {
  float A = 0.00;
  scanf("%f", &A);
  AumentoSalario(A);
  return 0;
}

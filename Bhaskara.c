#include <stdio.h>
#include <math.h>

int Bhaskara(double A, double B, double C){
  double Delta= (pow(B,2)-(4*A*C));
  if(Delta<0 || A == 0){
    printf("Impossivel calcular");
    return 0;
  }
  else{
    double R1= ((-B)+sqrt(Delta))/(2*A);
    double R2= ((-B)-sqrt(Delta))/(2*A);
    return printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
  }
}
int main() {
  double A, B, C = 0;
  scanf("%lf %lf %lf", &A, &B, &C);
  Bhaskara(A,B,C);
  return 0;
}
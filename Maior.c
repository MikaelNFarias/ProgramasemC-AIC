#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int MaiorABC(int a,int b,int c){ 
  int MAB= ((a+b+(abs(a-b)))/2);
  int MABC= ((MAB+c+(abs(MAB-c)))/2);
  return printf("%d eh o maior\n", MABC); 
  }
int main(){
  int a,b,c = 0;
  scanf("%d %d %d", &a, &b, &c);
  MaiorABC(a,b,c);
 }
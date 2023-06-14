int main(){
  int i,n,k = 0;
  scanf("%d", &n);
  int v[n];
  for(i=0;i<n;i++){
    scanf("%d", &v[i]);
  }
  i =1;
  int x=v[0];
  for(i=1;i<n;i++){
    if(v[i]<x){
      x=v[i];
      k=i;
    }
  }
  printf("Menor valor: %d\n", x); 
  printf("Posicao: %d\n", k);
}
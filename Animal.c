#include <stdio.h>
#include <string.h>

int CompareStrings(char * str1, char * str2){
  for(int i=0; i<strlen(str1); i++){
    if(str1[i]!=str2[i])
      return 0;
  }
  return 1;
}


int FindAnimal(char * vert, char * t, char * a){

  int animalCode[3] = {0,0,0};
  char vertebra[2][30] = {"vertebrado","invertebrado"};
  char tipo[4][30] = {"ave","mamifero","inseto", "anelidio"};
  char alimento[4][30] = {"carnivoro","onivoro","herbivoro","hematofago"};
  char animal[8][30] = {"aguia","pomba","homem","vaca","pulga","lagarta","sanguessuga","minhoca"};
  int codes[8] = {111,112,122,123,234,233,244,242};
  
  for(int i=0; i<2; i++){
    if(CompareStrings(vertebra[i],vert) == 1){
      animalCode[0] = i+1;
      
        for(int j=0; j<4; j++){
          if(CompareStrings(tipo[j],t) == 1){
            animalCode[1] = j+1;
      
            for(int k=0; k<4; k++){
              if(CompareStrings(alimento[k],a) == 1){
                animalCode[2] = k+1;
              }
            }
          }
        }
    }
  }
  int code = animalCode[0]*100 + animalCode[1]*10 + animalCode[2];
  for(int i=0; i<8; i++){
    if(code == codes[i]){
      printf("%s\n",animal[i]); 
    }
  }
}

int main() {
  char * vert[1][30];
  char * tipo[1][30];
  char * alimen[1][30];
  gets(vert);
  gets(tipo);
  gets(alimen);
  int code = FindAnimal(vert,tipo,alimen);
  return 0;
}

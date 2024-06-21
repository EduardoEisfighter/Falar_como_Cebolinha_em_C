#include <stdio.h>

#define MAX_PALAVRA 20

void copiar_cebolinha(char original[], char nova[]) {
  /* Falta implementar: copiar para "nova" a palavra "original"
     com as alterações do Cebolinha */
    int comprimento=0;
    while ((original[comprimento]) != ('\0')){
        comprimento++;
    }
    int j=0;
    for(int i=0;i<comprimento;i++){
        if ((original[i]=='R')&&(original[i+1]=='R')){
            nova[j]='L';
            j++;
            i++;
        }else if ((original[i]=='R')&&((original[i-1])!='R')){
            nova[j]='L';
            j++;
        }else{
            nova[j]=original[i];
            j++;
        }
        
    }
}

int main() {
  char palavra[MAX_PALAVRA];
  char palavra_modificada[MAX_PALAVRA];

  scanf("%s", palavra);
  copiar_cebolinha(palavra, palavra_modificada);
  printf("%s", palavra_modificada);

  return 0;
}
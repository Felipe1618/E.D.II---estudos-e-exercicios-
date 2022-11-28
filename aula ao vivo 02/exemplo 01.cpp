#include <stdio.h>
#include <stdlib.h>

#define tamanho 5 //tamanho do vetor atraves de uma constante.
int main(){

	int vet[tamanho];
	int i; 
	for(i=0; i<tamanho; i++){
		printf("Insira o elemento da pos %d do vetor:\n", i);
		scanf("%d", &vet[i]);
	}
	for(i=0; i<tamanho; i++){
		printf("%d ", vet[i]);
	}
}

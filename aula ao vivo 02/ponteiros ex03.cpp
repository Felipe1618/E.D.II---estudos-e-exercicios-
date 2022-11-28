#include <stdio.h>

#define tamanho 5

int vet[tamanho] = {10, 20, 30, 40, 50};
int *p;
int i;

int main(){
	for(p = &vet; 1; p = p+1){
		printf("Elemento atual do vetor: %d \n", *p);
		printf("Deseja imprimir o proximo elemento?: (digite 1)\n");
		scanf("%d", &i);
		if(i != 1){
			break;
		}
	}	
}

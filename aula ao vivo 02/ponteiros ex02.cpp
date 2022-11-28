#include <stdio.h>

#define tamanho 5

int vet[tamanho] = {10, 20, 30, 40, 50};
int *p;

int main(){
	p = vet; //p = &vet[0];
	
	printf("Conteudo da variavel para qual p aponta: %d - vet[0]: %d\n\n", *p, vet[0]);
	
	p = p + 1; //p = &vet[1];
	
	printf("Novo conteudo da variavel para qual p aponta: %d - vet[1]: %d\n\n", *p, vet[1]);
}

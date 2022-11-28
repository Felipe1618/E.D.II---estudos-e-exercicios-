//Exemplo livro - unidade 01 - ponteiros
#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi; //ponteiro q aponta para o endereço da mesma variável.

float xf;
float *ptr_xf;

char xc;
char *ptr_xc;

int main(){
	printf("Endereço da variavel xi: %d \n", &xi); //endereço da variavel chamado por '&'.
	printf("Endereço da variavel xi: %d \n", ptr_xi); //endereco da variavel chamada pelo ponteiro 'ptr'
	return(0);
}

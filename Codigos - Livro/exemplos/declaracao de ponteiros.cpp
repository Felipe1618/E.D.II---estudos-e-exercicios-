//Exemplo livro - unidade 01 - ponteiros
#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi; //ponteiro q aponta para o endere�o da mesma vari�vel.

float xf;
float *ptr_xf;

char xc;
char *ptr_xc;

int main(){
	printf("Endere�o da variavel xi: %d \n", &xi); //endere�o da variavel chamado por '&'.
	printf("Endere�o da variavel xi: %d \n", ptr_xi); //endereco da variavel chamada pelo ponteiro 'ptr'
	return(0);
}

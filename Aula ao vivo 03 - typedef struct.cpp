#include <stdio.h>
#include <stdlib.h>

struct NO{
	int dado;
	int dadodinam;
	struct NO *prox;
};
typedef struct NO NO; //tipo de dado = 'typedef' 'struct NO'
                      //Renomear um tipo de dado p/ a abstra��o da estrutura aumente com 'typedef'

int main(){
	struct NO n1; //estrutura est�tica, sem ponteiro.
	n1.dado = 10;
	printf("O valor de n1.dado: %d\n", n1.dado);
	
//Aloca��o din�mica de mem�ria
	struct NO *n2 = (struct NO*) malloc(sizeof(struct NO)); //Aloca��o din�mica de mem�ria / Um tipo de convers�o de tipo de dados. 
	n2->dadodinam = 11;
	printf("O valor de n1->dado dinamicamente: %d\n", n2->dadodinam);
}

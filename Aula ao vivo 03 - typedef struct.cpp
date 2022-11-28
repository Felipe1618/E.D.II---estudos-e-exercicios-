#include <stdio.h>
#include <stdlib.h>

struct NO{
	int dado;
	int dadodinam;
	struct NO *prox;
};
typedef struct NO NO; //tipo de dado = 'typedef' 'struct NO'
                      //Renomear um tipo de dado p/ a abstração da estrutura aumente com 'typedef'

int main(){
	struct NO n1; //estrutura estática, sem ponteiro.
	n1.dado = 10;
	printf("O valor de n1.dado: %d\n", n1.dado);
	
//Alocação dinâmica de memória
	struct NO *n2 = (struct NO*) malloc(sizeof(struct NO)); //Alocação dinâmica de memória / Um tipo de conversão de tipo de dados. 
	n2->dadodinam = 11;
	printf("O valor de n1->dado dinamicamente: %d\n", n2->dadodinam);
}

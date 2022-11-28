#include <stdio.h>
#include <stdlib.h>

typedef struct no{ //'no'->apelido para estrutura. Ir� armazenar as informa��es;
	int conteudo; //ir� armazenar a informa��o de cada no;
	struct no *esquerda, *direita; //ponteiros para direita e esquerda;	
}No; 

typedef struct{
	No *raiz; //ponteiro para o primeiro no da arvore, onde a mesma ir� come�ar;
}ArvB; //estrutura para arvore binaria;

//Inserir novo n� a esquerda
void inserirEsquerda(No *no, int valor){
	if(no->esquerda == NULL){
		No *novo = (No*)malloc(sizeof(no));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		no->esquerda = novo;
	}
	else{
		if(valor < no->esquerda->conteudo)//Traduzindo: se conteudo do n� esquerdo for menor q valor ...
			inserirEsquerda(no->esquerda, valor);
		if(valor > no->esquerda->conteudo) //Nessa condi��o e a anterior dessa fun��o, n�o permitira a inser��o
			inserirDireita(no->esquerda, valor); // de um mesmo valor.
	}
}

void inserirDireita(No *no, int valor){
	if(no->direita == NULL){
		No *novo = (No*)malloc(sizeof(no));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		novo->direita = novo;
	}
	else{
		if(valor > no->direita->conteudo)
			inserirDireita(no->direita, valor);
		if(valor < no->direita->conteudo)
			inserirEsquerda(no->direita, valor);
	}
}

//procedimento para inserir novo no;
void inserir(ArvB *arv, int valor){ //'valor' q ser� inserido no novo n� q ser� criado
	if(arv->raiz == NULL){ //verifica��o se a arvore est� vazia;
		No *novo = (No*)malloc(sizeof(no));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		arv->raiz = novo;
	} 
	else{  //se n�o estiver vazia ir� realizar essa compara��o
		if(valor < arv->raiz->conteudo);
			inserirEsquerda(arv->raiz, valor);
		else
			inserirDireita(arv->raiz, valor);
	}
}

void imprimir(No *raiz){
	if(raiz != NULL){ //Ir� realizar a impressa� dos n�s enquando raiz n�o for diferente de NULL
		imprimir(raiz->esquerda);
		printf("%d ", raiz->conteudo);
		imprimir(raiz->direita);
	}
}

int main(){
	int op, valor;
	ArvB arv;//Objeto e n�o um ponteiro
	arv.raiz = NULL;
	do{
		printf("\n0 - Sair\n1 - inserir\n2 - imprimir\n");
		scanf("%d", &op);
		
		switch(op){
			case 0:
				printf("\nSaindo ...\n");
			break;
			case 1:
				printf("Digite um valor: ");
				scanf("%d ", &valor);
				inserir(&arv, valor);
			break;
			case 2:
				printf("Impressao da arvore bin�ria:\n");
				imprimir(arv.raiz);
			break;		
		}
	}while(op != 0);	
}

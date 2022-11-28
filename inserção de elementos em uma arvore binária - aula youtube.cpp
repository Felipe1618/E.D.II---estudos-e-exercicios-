#include <stdio.h>
#include <stdlib.h>

typedef struct no{ //'no'->apelido para estrutura. Irá armazenar as informações;
	int conteudo; //irá armazenar a informação de cada no;
	struct no *esquerda, *direita; //ponteiros para direita e esquerda;	
}No; 

typedef struct{
	No *raiz; //ponteiro para o primeiro no da arvore, onde a mesma irá começar;
}ArvB; //estrutura para arvore binaria;

//Inserir novo nó a esquerda
void inserirEsquerda(No *no, int valor){
	if(no->esquerda == NULL){
		No *novo = (No*)malloc(sizeof(no));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		no->esquerda = novo;
	}
	else{
		if(valor < no->esquerda->conteudo)//Traduzindo: se conteudo do nó esquerdo for menor q valor ...
			inserirEsquerda(no->esquerda, valor);
		if(valor > no->esquerda->conteudo) //Nessa condição e a anterior dessa função, não permitira a inserção
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
void inserir(ArvB *arv, int valor){ //'valor' q será inserido no novo nó q será criado
	if(arv->raiz == NULL){ //verificação se a arvore está vazia;
		No *novo = (No*)malloc(sizeof(no));
		novo->conteudo = valor;
		novo->esquerda = NULL;
		novo->direita = NULL;
		arv->raiz = novo;
	} 
	else{  //se não estiver vazia irá realizar essa comparação
		if(valor < arv->raiz->conteudo);
			inserirEsquerda(arv->raiz, valor);
		else
			inserirDireita(arv->raiz, valor);
	}
}

void imprimir(No *raiz){
	if(raiz != NULL){ //Irá realizar a impressaõ dos nós enquando raiz não for diferente de NULL
		imprimir(raiz->esquerda);
		printf("%d ", raiz->conteudo);
		imprimir(raiz->direita);
	}
}

int main(){
	int op, valor;
	ArvB arv;//Objeto e não um ponteiro
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
				printf("Impressao da arvore binária:\n");
				imprimir(arv.raiz);
			break;		
		}
	}while(op != 0);	
}

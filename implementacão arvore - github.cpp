//Atividade M.A.P.A. - Tree B - Exemplo c�digo github
#include <stdio.h>
#include <stdlib.h>

/*Cada n� armazena tr�s informa��es:
	Nese caso um numero (dado);
	Ponteiro p/ sub�rvore � direita (sad)
	e ponteiro p/ sub�rvore � esquerda (sae). */
typedef struct tree{
	int dado; //Para a atividade MAPA ir� armazenar o RA como vetor
	struct tree* sad;
	struct tree* sae;
	
}Tree;

/*	A estrutura da �rvore � representada por um ponteiro
	p/ o n� raiz. Com esse ponteiro, temos acesso aos demais n�s.*/
Tree* createTree(){
	
	/*Uma �rvore � representada pelo endere�o do n� raiz,
	essa fun��o cria uma �rvore com nenhum elemento, 
	ou seja, cria uma �rvore vazia, por isso retirna NULL. */
	return NULL;
}

//Fun��o q verifica sem uma �rvore � vazia
int treeIsEmpty(Tree* t){
	//Retorna 1 se a �rvore for vazia e 0 caso contr�rio*/
	return t == NULL;
}

//Fun��o q mostra a informa��o da �rvore
void showTree(Tree* t){
	//Essa fun��o imprime os elementos de forma recursiva
	printf("<"); //Nota��o p/ organizar na hora de mostrar os elementos
	if(!treeIsEmpty(t)){ //se a �rvore n�o for vazia ...
		///Mostra os elementos em pr�-ordem
		printf("%d ", t->dado); //mostra a raizsae
		showTree(t->sae); //mostra a sae (sub�rvore � esquerda)
		showTree(t->sad); //mostra a sad (sub�rvore � direita)
	}
	printf(">"); //nota��o p/ organizar na hora de mostrar os elementos.
}

//Fun��o q insere um dado na �rvore
void insertTree(Tree** t, int dado){
	//Essa fun��o insere os elementos de forma recursiva
	if(*t == NULL){
		
	}
}


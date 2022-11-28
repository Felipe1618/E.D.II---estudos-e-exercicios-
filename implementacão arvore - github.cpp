//Atividade M.A.P.A. - Tree B - Exemplo código github
#include <stdio.h>
#include <stdlib.h>

/*Cada nó armazena três informações:
	Nese caso um numero (dado);
	Ponteiro p/ subàrvore á direita (sad)
	e ponteiro p/ subàrvore á esquerda (sae). */
typedef struct tree{
	int dado; //Para a atividade MAPA irá armazenar o RA como vetor
	struct tree* sad;
	struct tree* sae;
	
}Tree;

/*	A estrutura da árvore é representada por um ponteiro
	p/ o nó raiz. Com esse ponteiro, temos acesso aos demais nós.*/
Tree* createTree(){
	
	/*Uma árvore é representada pelo endereço do nó raiz,
	essa função cria uma árvore com nenhum elemento, 
	ou seja, cria uma árvore vazia, por isso retirna NULL. */
	return NULL;
}

//Função q verifica sem uma árvore é vazia
int treeIsEmpty(Tree* t){
	//Retorna 1 se a árvore for vazia e 0 caso contrário*/
	return t == NULL;
}

//Função q mostra a informação da árvore
void showTree(Tree* t){
	//Essa função imprime os elementos de forma recursiva
	printf("<"); //Notação p/ organizar na hora de mostrar os elementos
	if(!treeIsEmpty(t)){ //se a árvore não for vazia ...
		///Mostra os elementos em prè-ordem
		printf("%d ", t->dado); //mostra a raizsae
		showTree(t->sae); //mostra a sae (subárvore á esquerda)
		showTree(t->sad); //mostra a sad (subárvore á direita)
	}
	printf(">"); //notação p/ organizar na hora de mostrar os elementos.
}

//Função q insere um dado na árvore
void insertTree(Tree** t, int dado){
	//Essa função insere os elementos de forma recursiva
	if(*t == NULL){
		
	}
}


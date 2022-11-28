//Curso C | Árvore Binária | #2 - Como representar árvores binária
#include <stdio.h>
#include <stdlib.h>

struct tree{
	int item;
	struct tree *sae; //subárvore esquerda
	struct tree *sad; //subárvore direita
};
typedef struct tree Tree;

Tree *initialize(){
	return NULL;
}

Tree *insert(Tree *root, item x){
	if(root == NULL){
		Tree *aux = (Tree *)malloc(sizeof(Tree));
	}
}

int main(){
	Tree *root = initialize();
	return 0;
}

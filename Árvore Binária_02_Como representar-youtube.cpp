//Curso C | �rvore Bin�ria | #2 - Como representar �rvores bin�ria
#include <stdio.h>
#include <stdlib.h>

struct tree{
	int item;
	struct tree *sae; //sub�rvore esquerda
	struct tree *sad; //sub�rvore direita
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

//estrutura de um nó - livro - programa 1.1
#include <stdio.h>
#include <stdlib.h>

#define tamanho 100 //constante para tamamho do vetor para a estrutura str_no.

int main(){
//variáveis;
struct str_no arvore[tamanho]; //vetor para estrutura 'arvore'.
int indice = 0; //índice para o vetor;
	//Estrutura do nó;
		struct str_no{
			char dado; //armazena o valor do nó;
			int esq;
			int dir;
			int pai;
		};
//procurando um nó na arvore.
	int arvore_procura(char dado){ //função 'arvore_procura', q retorna um valor inteiro (posição no vetor do nó);
		if(indice != 0){
			for(int i = 0; i < indice; i++){
				if(arvore[i].dado == dado){
					return(i);
				}
			}
		}
	}
		else {
			return(0);
		}
}

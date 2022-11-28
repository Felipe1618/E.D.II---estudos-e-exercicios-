//estrutura de um n� - livro - programa 1.1
#include <stdio.h>
#include <stdlib.h>

#define tamanho 100 //constante para tamamho do vetor para a estrutura str_no.

int main(){
//vari�veis;
struct str_no arvore[tamanho]; //vetor para estrutura 'arvore'.
int indice = 0; //�ndice para o vetor;
	//Estrutura do n�;
		struct str_no{
			char dado; //armazena o valor do n�;
			int esq;
			int dir;
			int pai;
		};
//procurando um n� na arvore.
	int arvore_procura(char dado){ //fun��o 'arvore_procura', q retorna um valor inteiro (posi��o no vetor do n�);
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

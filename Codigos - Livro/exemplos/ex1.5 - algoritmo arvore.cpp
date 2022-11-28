#include <stdlib.h>
#include <stdio.h>

//constantes 
#define tamanho 100
#define E 0
#define D 1
#define R -1

//Estrutura
struct str_no{
	char dado;
	int esquerda;
	int direita;
	int pai;
};

//variáveis
struct str_no arvore[tamanho];
int lado, indice=0;
int opt = -1;
char pai, no;

//Prototipação
void arvore_insere(int pai, char dado, int lado);
int arvore_procura(char dado);
void menu_mostrar(void);

//Função Principal
int main(void){
	int temp;
	do{
		menu_mostrar();
		scanf("%d", &opt){
		switch (opt){
			case 1:
				printf("\nDigite o valor do Pai: ");
				scanf("%c", &pai);
				printf("Digite o valor do NO: ");
				scanf("%c", &no);
				printf("Digite o lado da subarvore (E=%d/D=%d/R=%d): ", E, D, R);
			}	
		}
	}
}

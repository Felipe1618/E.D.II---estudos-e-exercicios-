#include <stdio.h>

int main(){
	int i, j, num_atual; //indice i = prox. nº / indice j = nº anterior
	int vet[5] = {5, 3, 10, 1, 6}; //Ex.: i=3 e j=5, no inicio do programa
	
	for(i = 1; i < 5; i++){ //i = 1 começará no indice '1'
		num_atual = vet[i]; //num_atual == 3;
		j = i - 1; //j = 0;
		while((j >= 0) && (num_atual < vet[j])){
			vet[j+1] = vet[j];
			j--; //j= -1;
		}
		vet[j+1] = num_atual; //vet[0] = num_atual
	}
	for( i = 0; i < 5; i++){
		printf("%d ", vet[i]);
	}
return 0;
}

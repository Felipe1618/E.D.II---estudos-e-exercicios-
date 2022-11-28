#include <stdio.h>

int main(){
	int N = 0;
	int valor = 0;
	int i;
	printf("quantos valores ira inserir?:");
	scanf("%d", &N);
	
	for(i=1; i <= N; i++){
		printf("Insira o valor %d: ", i);
		scanf("%d", &valor);
	}
	valor % 2 != 0;
	printf("Os valores impares são: %d", valor);		
}

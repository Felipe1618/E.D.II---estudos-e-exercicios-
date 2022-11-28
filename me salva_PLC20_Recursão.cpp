#include <stdio.h>
#include <stdlib.h>

//Recursividade - calculando o Fatorial de um numero.
int fatorial(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n * fatorial(n - 1);
	}
}

int main(){
	int n;
	printf("Digite um valor: \n");
	scanf("%d", &n);
	int resultado;
	resultado = fatorial(n);
	printf("O fatorial de %d é: %d", n, resultado);
	return 0;
}

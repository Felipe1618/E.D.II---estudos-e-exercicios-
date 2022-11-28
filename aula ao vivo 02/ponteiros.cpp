#include <stdio.h>

int i;
int *p1;

int main(){
	i = 10; 
	p1 = &i;
	
	printf("Conteudo de i: %d", i);
	printf("\nendereço de i: %x\n", &i);
	
	printf("Conteudo de p1: %x", p1); 
	printf("\nconteudo da var. p/ a qual p1 aponta: %d", *p1);
	
}

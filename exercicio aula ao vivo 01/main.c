#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {	
	int A, B;
	
	printf("Insira o valor de A: \n");
	scanf("%d", &A);
	printf("Insira o valor de B: \n");
	scanf("%d", &B);
	
	int i;
	for(i = A; i<= B; i++){
		if(i % 2 != 0)
			printf("%d", i);
	}
	return 0;
}

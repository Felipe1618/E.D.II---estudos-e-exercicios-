//Aplicando o Insertionsort
#include <stdio.h>
#include <stdlib.h>

int main(){
	int Insertionsort (int vec[], int tam){
	   int i, j;
	   for(i = 1; i < tam; i++){
	     j = i;
	     while((vec[j] < vec[j - 1]) && (j!=0)){
	       troca(&vec[j], &vec[j-1]);
	       j--;
	    	}
	  	}
	}
}

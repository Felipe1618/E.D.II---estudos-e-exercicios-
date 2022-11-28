//Aplica o modo Selectionsort
#include <stdio.h>
#include <stdlib.h>

int Selectionsort(int vec[], int tam){
   int i, j, min;
   for (i = 0; i < (tam-1); i++)
   {
      min = i;
      for (j = (i+1); j < tam; j++) {
          if(vec[j] < vec[min]) {
             min = j;
         }
      }
      if (i != min) {
         troca(&vec[i], &vec[min]);
     }
  }
}

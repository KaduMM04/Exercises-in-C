//Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3 posições que contenha a somados valores de cada uma das linhas da matriz. Crie um vetor com 4 posições que contenha amultiplicação dos valores de cada uma das colunas da matriz. Ao final do processamento, imprimaesses vetores

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int totalsoma[3] = {0}; 
	int totalmult[4] = {1, 1, 1, 1};
	int matriz[3][4];
	int l, c, i, j , mult;	
	
   	srand(time(NULL));
   	
   	for (l = 0; l < 3; l++) {
   		for (c = 0; c < 4; c++) {
   			matriz[l][c] = rand() % 10;
				 
   			totalsoma[l] += matriz[l][c];
   			totalmult[c] *= matriz[l][c];
   			 
   			printf(" %d ", matriz[l][c]);
   		}
   		printf("\n");
	} 
	
	for (i = 0; i < 3; i++){
		printf("total soma da linha %d: %d \n", i,totalsoma[i]);
	}
	printf("\n");
		
	for (j = 0; j < 4; j++){
		printf("total multiplicacao da coluna %d: %d \n", j, totalmult[j]);
	}
   			 
			
   				
			
					 
  	return 0;
}

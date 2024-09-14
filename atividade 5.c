/*5. Uma empresa possui tr�s lojas, cada uma com 6 funcion�rios. Escreva um programa que forne�a �ger�ncia algumas informa��es relativas aos sal�rios dos funcion�rios dessa empresa.
 Os sal�riosdevem ser armazenados em uma matriz bidimensional (loja X funcion�rio). O programa deve:a. preencher a matriz de sal�rios por leitura do teclado;b. imprimir os sal�rios de todos os funcion�rios,
+ identificando qual a loja em que trabalha;c. imprimir o total pago em sal�rios por loja;d. informar quantos funcion�rios recebem sal�rio superior a R$ 2.000,00 na primeira loja;e. informar a m�dia salarial da segunda loja*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	float empresa [3][6];
	int l, c, soma = 0;
	
		srand(time(NULL));
		
		for (l = 0; l < 3; l++) {
			
			printf(" loja %d: ",l);
		
   			for (c = 0; c < 6; c++) {
   				
   				empresa[l][c] = rand() % 10;
   				
   				printf(" [%.0f] ", empresa[l][c]);
				if(l == 0 || l ==1 || l == 2){
					soma = soma + empresa[l];
				}
   			}
   			printf("\n");
        }
        printf(" %d ", soma);
	
	return 0;
}

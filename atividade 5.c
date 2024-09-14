/*5. Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça àgerência algumas informações relativas aos salários dos funcionários dessa empresa.
 Os saláriosdevem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:a. preencher a matriz de salários por leitura do teclado;b. imprimir os salários de todos os funcionários,
+ identificando qual a loja em que trabalha;c. imprimir o total pago em salários por loja;d. informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;e. informar a média salarial da segunda loja*/

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

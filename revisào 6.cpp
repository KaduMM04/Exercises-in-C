// Escreva um algoritmo que leia v�rios n�meros e informe quantosn�meros entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, oalgoritmo dever� cessar sua execu��o

#include <stdio.h>

int main() {
	int valor, qtde = 0;
	
		printf ("Digite o valor aqui: ");
		scanf("%d", &valor);
		while (valor!=0) {
			if ((valor>100) && (valor<200)) {
				qtde=qtde+1;
			}
			scanf("%d", &valor);
		}
		printf("Foram digitados %d valores no intervalo.", qtde);
		return 0;
	}

// Elabore um programa que efetue o c�lculo do fatorial de um 
// valor inteiro e apresente o resultado dessa opera��o.
// DICA: o fatorial � o produto (resultado da multiplica��o) 
// dos n�meros inteiros positivos desde 1 at� o
// limite informado, por exemplo 5.
// 5! = 1 * 2 * 3 * 4 * 5 = 120

#include <stdio.h>

int main () {
	
	int i, num;
	int erro; // flag para verificar se o valor digitado est� fora do intervalo
	double fatorial = 1.0; // n�o pode come�ar com zero pq � multiplica��o

	do {	
		erro = 0; // 0 diz que n�o tem erro
		
		printf("Qual fatorial voce deseja saber [0, 170]? ");
		scanf("%d", &num);
		
		if ((num < 0) || (num > 170)) { // se fora do interval0o
			printf("Numero fora do intervalo. Tente novamente.\n");
			erro = 1; // 1 diz que tem erro
		}
		
	} while (erro == 1); // se deu erro, volta para a linha 15
	
	for (i = num; i >= 1; i--) { // percorre de forma decrescente
		
		fatorial = fatorial * i; // calcula o fatorial
		
		printf("cont i: %d   fatorial atual: %g \n", i, fatorial);
		// para imprimir o valor do fatorial sem nota��o cient�fica, usar %lf
	}
	
	return 0;
}

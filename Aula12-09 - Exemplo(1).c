// Elabore um programa que efetue o cálculo do fatorial de um 
// valor inteiro e apresente o resultado dessa operação.
// DICA: o fatorial é o produto (resultado da multiplicação) 
// dos números inteiros positivos desde 1 até o
// limite informado, por exemplo 5.
// 5! = 1 * 2 * 3 * 4 * 5 = 120

#include <stdio.h>

int main () {
	
	int i, num;
	int erro; // flag para verificar se o valor digitado está fora do intervalo
	double fatorial = 1.0; // não pode começar com zero pq é multiplicação

	do {	
		erro = 0; // 0 diz que não tem erro
		
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
		// para imprimir o valor do fatorial sem notação científica, usar %lf
	}
	
	return 0;
}

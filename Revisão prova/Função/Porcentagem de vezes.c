#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vetor[], int tamanho) {
	srand(time(NULL));
	for(int i = 0; i < 1000; i++) {
		vetor[i] = rand() % 6 + 1;
	}
}

void contarNumeros(int vetor[], int tamanho, int contagem[]) {
	for(int i = 0; i < tamanho; i++) {
		contagem[vetor[i]-1]++;// Incrementa a contagem para o valor sorteado
	}
}

void exibirPorcentagem(int contagem[], int tamanho) {
	printf("Porcentagem de vezes que cada numero foi sorteado:\n");
	for(int i = 0; i < tamanho; i++) {
		float percentual = (float)contagem[i] / tamanho * 100;
		printf("numero %d: %.2f\n",i + 1, percentual);
	}
}

int main() {
	 int  tamanho = 1000;
	int vetor[tamanho];
    int contagem[6] = {0}; // Inicializa o vetor de contagem com zeros

    preencherVetor(vetor, tamanho);
    contarNumeros(vetor, tamanho, contagem);
    exibirPorcentagem(contagem, 6);

    return 0;
}

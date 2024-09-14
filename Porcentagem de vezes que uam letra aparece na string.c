#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char frase[1000];
	char letra;
	int totalCaracteres = 0, ocorrencias = 0;
	
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	//Converte a letra para minuscula para comparar
	letra = tolower(letra);
	
	for(int i = 0; frase[i] != '\0'; i++) {
		if(isalpha(frase[i])) { // Verifica se é uma letra
			totalCaracteres++;
			//Verifica se é letra minuscula ou maiuscula
			if(tolower(frase[i]) == letra) {
				ocorrencias++;
			}
		}
	}
	
	if(totalCaracteres > 0) {
		float percentual = (float)ocorrencias / totalCaracteres * 100;
		printf("Percentual: %.2f%%\n", percentual);
	}else{
		printf("Nenhuma letra encontrada na frase.\n");
	}
	return 0;	
}

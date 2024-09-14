#include <stdio.h>
#include <string.h>

int main() {
	char frase[100], invertida[100];
	int i, j;
	
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	
	//remove o caracter de nova linha inserido pelo fgets
	frase[strcspn(frase, "\n")] = '\0';
	
	//inverte a string
	
	j = 0;
	for(i = strlen(frase) - 1; i >= 0; i--){
		invertida[j++] = frase[i];// armazena os caracteres da string invertida	
	}
	invertida[j] = '\0';
	
	printf("A string invertida e: %s\n", invertida);
	
	return 0;
}

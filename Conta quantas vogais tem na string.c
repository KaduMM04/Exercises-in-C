#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char frase[100];
	int vogais = 0;
	
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	
	for (int i = 0; frase[i] != '\n'; i++) {
		//verifica se a vogal é (maiuscula ou minuscula)
		if(strchr("aeiouAEIOU", frase[i])) {
			vogais++;
			
		}
	}
	
	printf("Onomero de vogais na srting e: %d\n", vogais);
	
	return 0;
}

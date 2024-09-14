#include <stdio.h>

int main() {
		float num, media, soma = 0;
		int contador = 1;
		
	while ( contador <= 10 ) {
			printf("Digite um numero aqui: ");
			scanf("%f", &num);
			
			soma = soma + num;
			
			contador = contador + 1;
		}
			printf("%.2f\n", soma);
			
			media = soma / 10.0;
		return 0;		
}

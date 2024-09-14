#include <stdio.h>

int verificaPrimo(int num) {
	int i, divisores = 0;
	
	for(i = 1; i <= num; i++) {
		if(num % i == 0) {
			divisores++;
		}
	}
	if(divisores == 2){
		return 1;// se for primo
	}else{
		return 0;// se n for primo
	}
	
}

int main() {
	int numero, resultado;
	
	printf("Digite um numero int positivo: ");
	scanf("%d", &numero);
	
	resultado = verificaPrimo(numero);
	
	if(resultado == 1){
		printf("%d e um numero primo. \n", numero);
	}else{
		printf("%d nao e um numero primo", numero);
	}
	
	return 0;
}

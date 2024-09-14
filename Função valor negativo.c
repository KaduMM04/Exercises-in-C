#include<stdio.h>

void Positivo(int *num){

		if(num < 0){
		*num = -*num;
	}
	
}

int main() {
	int entrada;
	
	printf("digite um numero: ");
	scanf("%d",&entrada);
	
	positivo(&entrada);
	
	printf("O numero positivo é: %d\n", entrada);
	
	return 0;
}

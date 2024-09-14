#include<stdio.h>

void Positivo(int *num){

		if(*num < 0){
		*num = -*num;
	}
	
}

int main() {
	int num;
	
	printf("digite um numero: ");
	scanf("%d",&num);
	
	Positivo(&num);
	
	printf("O numero positivo eh: %d\n", num);
	
	return 0;
}

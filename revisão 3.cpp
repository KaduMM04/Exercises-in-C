//3. Fa�a um programa que leia n n�meros e, para cada dessesn�meros, diga se � primo ou n�o. Pare a repeti��o quando for lido um n�meronegativo

#include <stdio.h>

int main() {
	
	int num, i, cont = 0;
	
	do {
	
	
		printf("Digite um numero krlh: ");
		scanf("%d", &num);
	
	for (i = 2; i <= num / 2; i++) {
		
		 	
		if(num % i == 0) {
			cont++;
			break;
		}
	}
	
	if (cont == 0){

		printf ("%d eh um numero primo\n", num);
			}
	else{

		printf ("%d n eh um numero primo\n", num);
			}
	}while (num > 0);
	
		
	return 0;	
	
		
}

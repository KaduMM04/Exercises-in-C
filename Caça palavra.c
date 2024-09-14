#include <stdio.h>
#include <string.h>

int main () {
	
	char palavra[8] = "biscoito", letra[8], i;
 
	
	for (i = 0; i < 8; i++) {
		
		do{
			printf("\ndigite aqui: ");
			scanf("%c", &letra[i]);
		} while (palavra[i] = letra[i]);
			printf("%s", letra[i]);
	}
	
	return 0;
}

#include <stdio.h>

int main() {
	
	int  num, i = 1, divisores = 0;
		
		printf("digite aqui: ");
		scanf("%d", &num);
		
		do {
			if (num % i == 0){
				divisores++;
			}
				i++;
			if ( divisores == 0 )
				printf("%d e primo\n", num);
				
			else
				printf("%d n e primo\n", num);	
				
		}while (i != num);
				
	
		
		
		
		
			return 0;
			
}

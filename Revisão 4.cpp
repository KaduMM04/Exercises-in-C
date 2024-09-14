//4. Escreva um algoritmo que encontre o quinto número maior que1000 cuja divisão por 11 tenha resto 5.
#include <stdio.h>

int main() {
	
	int i, cont;
		i = 1001;
		cont = 0;
	
		while (cont < 5) {
			if (i % 11 == 5) {
				printf ("O quinto numero maior que 1000 cuja divisão por 11 resta 5 eh : %d\n", i);
				cont++;
				
			}
			i++;
		}
	
	
	
	return 0;
}

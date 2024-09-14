#include <stdio.h>

int main () {
	
	float tabuada [11][11];
	int l, c;
		
		for (l = 0; l <= 10; l++) {
			for (c = 0; c <= 10; c++) {
				tabuada[l][c] = l * c;
				
				printf(" %.0f ", tabuada[l][c]);
			}
			
		printf("\n");
		}
		
	
	return 0;
}

//Escreva um programa que mostra na tela todos os númerosinteiros divisíveis por 7 contidos no intervalo fechado [0, 1000]


#include <stdio.h>

int main(){
	 int num = 1;
	 
	 	do {
	 		
	 		if ( num % 7 == 0 ){
	 			printf(" %d\n ", num);
			 }
			 
			 num++;
			 
		 }while ( num <= 1000 );
	
	
	return 0;
}	

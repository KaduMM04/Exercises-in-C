#include<stdio.h>
#include<string.h>

typedef struct{
	char city[100];
	int IDH;
	float rendaper;
	int popu;
}cidades;


int main() {
	
		char nc[100];
		int i = 0, numCity, indiceMaiorpop = 0;
		int soma = 0, mediarpc = 0, maiorpop = 0;
		
		printf("Digite a quantidades de cidades: ");
		scanf("%i", &numCity);
		
		cidades c[numCity];
		
		for(i = 0; i < numCity; i++) {
			printf("Cidade %d \n", i);
			
			printf("digite o nome da cidade: ");
			fflush(stdin);
			scanf("%[^\n]s", c[i].city);
			
			printf("Digite o IDH da cidade: ");
			scanf("%d", &c[i].IDH);
			
			printf("Digite a renda per capita da cidade: ");
			scanf("%f", &c[i].rendaper);
			
			printf("Digite o numera da populacao: ");
			scanf("%d", &c[i].popu);
			
			printf("\n");
			
			soma = soma + c[i].rendaper;
			
			if (c[i].popu > maiorpop){
				maiorpop = c[i].popu;
				indiceMaiorpop = i;
			}
		}
		
		
		mediarpc = soma / numCity;
		
		printf("Media de renda per capita das cidades eh = %d \n", mediarpc);
		
		printf("\nCidade mais populosa: %s \n ", c[indiceMaiorpop].city);
		
		printf("\n");
		
		printf("Pesquise o nome de uma cidade: ");
		scanf("%s", nc);
		
		int achar = 0;
		for ( i = 0; i < numCity; i++ ) {
			if(strcmp(c[i].city, nc ) == 0) {
				achar = 1;
				
				printf("Cidade %d \n", i);
				printf("Nome da cidade: %s\n ", c[i].city);
				printf("IDH da cidade: %d\n ", c[i].IDH);
				printf("Renda per capita da cidade: %.2f\n ", c[i].rendaper);
				printf("Numera da populacao: %d\n ", c[i].popu);
				break;
			}
		}
		
		if (!achar) {
			printf("Cidade n encontrada!\n");
		}
	
	return 0;
}

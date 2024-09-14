
#include <stdio.h>
#include<string.h>
typedef struct{
 
		float cep;
		 
		char city[50];
		 
		int numvei;
		 
		int multas;
	}DadosCidades;
	int main() {
	 
	int i = 0, numCity, nc = 0;
	 
	int maiorqtdm = 0, indiceMaiormulta, menorqtdm = 0, indiceMenormulta = 0, indiceS = 0;
	 
	int soma = 0, s = 0;
	 
	float mediaV = 0, mediaM = 0;
	 
	 
	printf("Digite o numero de cidades: ");
	 
	scanf("%d", &numCity);
	 
	 
	DadosCidades dc[numCity];
	 
	 
	for(i = 0; i < numCity; i++){
	 
			printf("Cidade: %d\n",i);
			 
			printf("Digite o nome da cidade: ");
			 
			fflush(stdin);
			 
			scanf("%[^\n]s", dc[i]
			.city);
			 
			 
			printf("Digite cep da cidade: ");
			 
			scanf("%f", &dc[i]
			.cep);
			 
			 
			printf("Digite o numero de veiculos de passeio em 2022 da cidade: ");
			 
			scanf("%d", &dc[i]
			.numvei);
			 
			 
			printf("Digite o numero de multas de transito em 2022: ");
			 
			scanf("%d", &dc[i]
			.multas);
			 
			 
			soma = soma + dc[i]
			.numvei;
			 
			 
			if (dc[i].multas > maiorqtdm){
				maiorqtdm = dc[i].multas;
			 	indiceMaiormulta = i;
			 }
			 if(dc[i].multas < menorqtdm){
			 	menorqtdm = dc[i].multas;
				indiceMenormulta = i;
			 
			}
			 
			if(dc[i].numvei < 10000){ 
				s = s + dc[i].multas;
			 	nc++;
			}
			printf("\n");
	 
	}
	 
	mediaM = s / nc;
	mediaV = soma / numCity;
	 
	 
	printf("Cidade com a maior quantidade de multas: %s com %d\n", dc[indiceMaiormulta].city, dc[indiceMaiormulta].multas);
	 
	 
	printf("cidade com a menor quantidade de multas: %s com %d\n",dc[indiceMenormulta].city, dc[indiceMenormulta].multas);
	 
	 
	printf("Media de carros de passeio nas n cidades: %.2f\n", mediaV);
	 
	 
	printf("Media de multas cidades com menos de 10000 veiculos: %.2f", mediaM);
	 
	 
	return 0;
}

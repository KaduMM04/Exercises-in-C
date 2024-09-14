#include<stdio.h>
#include<string.h>

typedef struct{
	char modelo[100];
	int ano;
	float valor;
	char placa[100];	
	int combustivel;
	int doc;
	float Ipva;
}veiculos;

int main () {
	char pesquisa[50];
	int qtd, i = 0, indiceAno = 0, achar = 0;
	
	
	printf("Digite o numero de veiculos a serem cadastrados: ");
	scanf("%d", &qtd);
	
	veiculos v[qtd];
	
	for(i = 0; i < qtd; i++) {
		printf("veiculo %d \n", i);
		
		printf("Qual o modelo do veiculo: ");
		fflush(stdin);
		scanf("%[^\n]s", v[i].modelo);
		
		printf("Qual o ano do veiculo: ");
		scanf("%d", &v[i].ano);
		
		printf("Qual a placa do veiculo: ");
		fflush(stdin);
		scanf("%[^\n]s", v[i].placa);
		
		printf("Qual o RENAVAM do veiculo: ");
		scanf("%d", &v[i].doc);
		
		printf("Qual o valor do veiculo: ");
		scanf("%f", &v[i].valor);
		
		//coloquei os valores das % do ipva para facilitar
		
		printf("Qual o tipo de combustivel do veiculo:\n 1 gas\n 2 flex\n 4 gasolina\n: ");
		scanf("%d", &v[i].combustivel);
		
	
		
		v[i].Ipva = ((v[i].valor * v[i].combustivel) / 100.0);
		
		if(v[i].ano > 2003){
			indiceAno= i;
			printf("IPVA: %.2f\n", v[i].Ipva);
		}else {
			printf("Seu veiculo esta insento do IPVA\n");
		}
		
	}
	
		printf("Pesquise um modelo de veiculo: ");
		fflush(stdin);
		scanf("%[^\n]s", pesquisa);
		
		
	for(i = 0; i < qtd; i++) {
		if(strcmp(v[i].modelo, pesquisa ) == 0) {
			achar = 1;
				
			printf("\nModelo do veiculo: %s", v[i].modelo);
			printf("\nPlaca do veiculo: %s ", v[i].placa);	
			printf("\nRENAVAM do veiculo: %d\n", v[i].doc);	
		
		}	
			if(v[indiceAno].ano > 2003){
				printf("IPVA do veiculo %s: %.2f",v[indiceAno].modelo, v[indiceAno].Ipva);
			}else {
				printf("Seu veiculo esta insento do IPVA\n");
				break;
			}		
	}
		
		
	return 0;
}


#include <stdio.h>
void preenche(float conector1[], float conector2[], int qtd){
 
	
		for(int i = 0; i < qtd; i++){
			do{
	 			printf("Digite o valor do conector1 %d: ",i);
	 			scanf("%f", &conector1[i]);
	 			if(conector1[i] != 0 && conector1[i] != 1){
	 				printf("Digite apenas os numeros 0 e 1");
				 }
	 		}while(conector1[i] != 0 && conector1[i] != 1);
		}
	 
		for(int i = 0; i < qtd; i++){
			do{
				printf("Digite o valor do conector2 %d: ",i);
	 			scanf("%f", &conector2[i]);
	 			if(conector2[i] != 0 && conector2[i] != 1){
	 				printf("Digite apenas os numeros 0 e 1");
				 }
	 		}while(conector2[i] != 0 && conector2[i] != 1);
		}
	
}
void comparar(float conector1[], float conector2[], int qtd){
	 
	int com = 0;
	 
	for(int i = 0; i < qtd; i++){
		if(conector1[i] != conector2[i]){
	 		com = 1;
	 		break;
		} 
	}
	if(com){
		printf("Sao compativeis");
	}else{
		printf("Nao sao compativeis");
	}
}
int main() {
 
	int tamanho;
	 
	 
	printf("Digite o tamanhodo vetores: ");
	 
	scanf("%d", &tamanho);
	 
	 
	float conector1[tamanho];
	 
	float conector2[tamanho]; 
	 
	 
	preenche(conector1, conector2, tamanho);
	 
	 
	comparar(conector1, conector2, tamanho);
	 
	return 0;
}

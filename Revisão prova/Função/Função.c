#include <stdio.h>

float pesoideal(float altura, char sexo){
		
		if(sexo == 'M' || sexo == 'm'){
				return ((72.7 * altura) - 58);
		}
		else if(sexo == 'F' || sexo == 'f'){
				return ((62.1 * altura) - 44.7);
		}
		
}
int main(){
	float altura, peso, result;
	char sexo;
	
	printf("\nDigite seu sexo: ");
	scanf("%c", &sexo);
	
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	
	printf("\nDigite seu peso: ");
	scanf("%f", &peso);
	
	result = pesoideal(altura, sexo);
	
    printf("\nSeu peso ideal eh: %.1f\n", result);
	
	
	if(result < peso){
		printf("\nTHAIS CARLA!!!");
	}
	
	else if(result > peso){
		printf("\nfamoso frango!!!#passafome#ectomorfo");
	}
 
	return 0;
}

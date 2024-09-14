#include<stdio.h>

int leValor () {
	int valor ;
	
	printf("digite um valor: ");
	scanf("%d", &valor);
	
	return valor;
	
}
void soma(int x, int y, int *result){
	*result = x + y;
}
int main() {
	int x, y, result;
	
	y = leValor();
	x = leValor();
	
	soma(x, y, &result);
	
	printf("Resultado: %d \n", result);
	
	
	return 0;
}

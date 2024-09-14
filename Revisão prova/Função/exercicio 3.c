#include <stdio.h>
void preenche(float *conector1, float *conector2, int qtd){
for(int i = 0; i < qtd; i++){
printf("Digite o valor do conector1 %d: ",i);
scanf("%f", &conector1[i]);
}
for(int j = 0; j < qtd; j++){
printf("Digite o valor do conector2 %d: ",j);
scanf("%f", &conector2[j]);
}
}
void comparar(float conector1[], float conector2[], int qtd){
int com = 0;
for(int i = 0; i < qtd; i++){
for(int j = 0; j < conector1[i]; j++){
if(conector1[i] != conector2[j]){
printf("sao compativeis");
}else{
printf("Nao sao compativeis");
}
}
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

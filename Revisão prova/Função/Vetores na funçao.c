#include <stdio.h>

// também funciona com valores[]
void preenche(float *valores, int qtd) {
  for(int i = 0; i < qtd; i++) {
    printf("Digite o valor %d: ", i);
    scanf("%f", &valores[i]);
  }
}

// também funciona com valores[]
float calc_media(float *valores, int qtd) {
  
  float soma = 0;
 
  for(int i = 0; i < qtd; i++) {
    soma += valores[i];
  }
 
  return soma / qtd;
}

// passagem por valor
void imprimeElemento(float num) {
  printf("Elemento: %f\n", num);  
}
// passagem por referência
void editaElemento(float *num) {
  *num = 1000000.0;
}

int main () {
  
  int tamanho;

  printf("Tamanho desejado: ");
  scanf("%i", &tamanho);
  
  float valores[tamanho], media;

  /* ----------- passagem de vetor completo ---------- */
  // passar somente o nome do vetor
  // alterações realizadas na função são feitas direto na memória,
  // então tem efeito na main (assim como em passagem por referência)
  preenche(valores, tamanho);
   
  media = calc_media(valores, tamanho);
   
  printf("\nMedia: %.2f\n", media);

  /* ----------- passagem de parte do vetor ---------- */
  // passar o nome do vetor e o índice desejado
  // passar por valor ou por referência, dependendo do que é 
  // feito na função
  
  // passagem de parâmetro por valor
  imprimeElemento(valores[3]);

  // passagem de parâmetro por referência
  editaElemento(&valores[3]);

  imprimeElemento(valores[3]);
   
  return 0;
}

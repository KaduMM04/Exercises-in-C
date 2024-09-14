#include <stdio.h>

// constantes
#define NLINHAS 3
#define NCOLUNAS 3

void preencherMatriz(int matriz[NLINHAS][NCOLUNAS]) {
  int l, c;
  
  for(l = 0; l < NLINHAS; l++) {
    for(c = 0; c < NCOLUNAS; c++) {
      printf("Entre com o elemento matriz[%d][%d]: ", l, c);
      scanf("%d", &matriz[l][c]);
    }
  }
}

void exibirMatriz(int matriz[NLINHAS][NCOLUNAS]) {
  int l, c;

  printf("Matriz completa: \n");
  
  for(l = 0; l < NLINHAS; l++) {
    for(c = 0; c < NCOLUNAS; c++) {
      printf("%3d ", matriz[l][c]); // %3d para formatação da impressão com 3 espaços
    }
    printf("\n");
  }
}

void exibirElemento(int elemento) {

  printf("Ultimo elemento: %d \n", elemento);
  
}

void multiplicarElemento(int *elemento) {

  *elemento = *elemento * 3;
  
  printf("Ultimo elemento multiplicado por 3: %d \n", *elemento);
  
}

int main() {
  
  int matriz[NLINHAS][NCOLUNAS];

  /* ------------ preenche matriz completa ------------ */
  preencherMatriz(matriz);

  /* -------------- exibe matriz completa ------------- */
  // alterações realizadas na função são feitas direto na memória,
  // então tem efeito na main (assim como em passagem por referência)
  exibirMatriz(matriz);

  /* --------- passagem de elemento por valor --------- */
  // -1 porque quero o último elemento da matriz, neste caso, matriz[2][2]
  exibirElemento(matriz[NLINHAS - 1][NCOLUNAS - 1]);

  /* ------- passagem de elemento por referência ------ */
  // lembrar de utilizar & na chamada e * na função
  multiplicarElemento(&matriz[NLINHAS - 1][NCOLUNAS - 1]);

  return 0;
}

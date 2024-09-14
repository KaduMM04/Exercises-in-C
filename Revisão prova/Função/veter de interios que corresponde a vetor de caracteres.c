#include <stdio.h>

void imprimirCaracteres(int inteiros[], char caracteres[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < inteiros[i]; j++) {
            printf("%c", caracteres[i]);
        }
        printf("\n");
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int inteiros[tamanho];
    char caracteres[tamanho];

    printf("Digite os numeros inteiros positivos: \n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &inteiros[i]);
    }

    printf("Digite os caracteres: \n");
    for (int i = 0; i < tamanho; i++) {
        scanf(" %c", &caracteres[i]);
    }

    printf("Imprimindo os caracteres de acordo com os numeros inteiros:\n");
    imprimirCaracteres(inteiros, caracteres, tamanho);

    return 0;
}

#include <stdio.h>

// Função para ler uma matriz
void lerMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para somar duas matrizes
void somarMatrizes(int linhas, int colunas, int matriz1[linhas][colunas], int matriz2[linhas][colunas], int resultado[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz1[linhas][colunas], matriz2[linhas][colunas], resultado[linhas][colunas];

    printf("Digite a primeira matriz:\n");
    lerMatriz(linhas, colunas, matriz1);

    printf("Digite a segunda matriz:\n");
    lerMatriz(linhas, colunas, matriz2);

    // Somando as matrizes
    somarMatrizes(linhas, colunas, matriz1, matriz2, resultado);

    // Imprimindo a matriz resultante
    imprimirMatriz(linhas, colunas, resultado);

    return 0;
}

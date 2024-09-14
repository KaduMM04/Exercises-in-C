/*5. Uma empresa possui tr�s lojas, cada uma com 6 funcion�rios. Escreva um programa que forne�a �ger�ncia algumas informa��es relativas aos sal�rios dos funcion�rios dessa empresa.
 Os sal�riosdevem ser armazenados em uma matriz bidimensional (loja X funcion�rio). O programa deve:a. preencher a matriz de sal�rios por leitura do teclado;b. imprimir os sal�rios de todos os funcion�rios,
+ identificando qual a loja em que trabalha;c. imprimir o total pago em sal�rios por loja;d. informar quantos funcion�rios recebem sal�rio superior a R$ 2.000,00 na primeira loja;e. informar a m�dia salarial da segunda loja*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float empresa[3][6];
    int l, c;
    int totalSalariosSuperiores = 0;
    float totalSalariosPorLoja[3] = {0.0};
    float mediaSalarialSegundaLoja = 0.0;

    srand(time(NULL));

    // Preencher a matriz de sal�rios e calcular os totais por loja
    for (l = 0; l < 3; l++) {
        printf("Loja %d:\n", l);
        for (c = 0; c < 6; c++) {
            empresa[l][c] = rand() % 3000 + 1000; // Sal�rios aleat�rios entre R$1000 e R$3999
            printf("Funcion�rio %d: R$%.2f\n", c, empresa[l][c]);
            totalSalariosPorLoja[l] += empresa[l][c];
            if (l == 0 && empresa[l][c] > 2000) {
                totalSalariosSuperiores++;
            }
        }
        printf("Total pago em sal�rios na Loja %d: R$%.2f\n", l, totalSalariosPorLoja[l]);
        printf("\n");
    }

    // Calcular a m�dia salarial da segunda loja (�ndice 1)
    mediaSalarialSegundaLoja = totalSalariosPorLoja[1] / 6.0;

    printf("Total de funcion�rios na primeira loja com sal�rio superior a R$2000: %d\n", totalSalariosSuperiores);
    printf("M�dia salarial da segunda loja: R$%.2f\n", mediaSalarialSegundaLoja);

    return 0;
}


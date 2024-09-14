/*5. Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça àgerência algumas informações relativas aos salários dos funcionários dessa empresa.
 Os saláriosdevem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:a. preencher a matriz de salários por leitura do teclado;b. imprimir os salários de todos os funcionários,
+ identificando qual a loja em que trabalha;c. imprimir o total pago em salários por loja;d. informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;e. informar a média salarial da segunda loja*/

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

    // Preencher a matriz de salários e calcular os totais por loja
    for (l = 0; l < 3; l++) {
        printf("Loja %d:\n", l);
        for (c = 0; c < 6; c++) {
            empresa[l][c] = rand() % 3000 + 1000; // Salários aleatórios entre R$1000 e R$3999
            printf("Funcionário %d: R$%.2f\n", c, empresa[l][c]);
            totalSalariosPorLoja[l] += empresa[l][c];
            if (l == 0 && empresa[l][c] > 2000) {
                totalSalariosSuperiores++;
            }
        }
        printf("Total pago em salários na Loja %d: R$%.2f\n", l, totalSalariosPorLoja[l]);
        printf("\n");
    }

    // Calcular a média salarial da segunda loja (índice 1)
    mediaSalarialSegundaLoja = totalSalariosPorLoja[1] / 6.0;

    printf("Total de funcionários na primeira loja com salário superior a R$2000: %d\n", totalSalariosSuperiores);
    printf("Média salarial da segunda loja: R$%.2f\n", mediaSalarialSegundaLoja);

    return 0;
}


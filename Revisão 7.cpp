
#include <stdio.h>

int main() {

    int limite_inferior, limite_superior;
    int soma = 0;

    // Solicita ao usu�rio para digitar os limites
    printf("Limite inferior: ");
    scanf("%d", &limite_inferior);
    printf("Limite superior: ");
    scanf("%d", &limite_superior);

    // Verifica se o limite inferior � �mpar e ajusta-o para ser par
    if (limite_inferior % 2 != 0) {
        limite_inferior++;
    }

    // Imprime n�meros pares no intervalo e calcula a soma
    printf("N�meros pares no intervalo:\n");
    for (int i = limite_inferior; i <= limite_superior; i += 2) {
        printf("%d ", i);
        soma += i;
    }

    // Imprime a soma dos n�meros pares no intervalo
    printf("\nSoma: %d\n", soma);

    return 0;
}
 







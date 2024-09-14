//Foi realizada uma pesquisa entre os habitantes de uma região ecoletados os dados de altura e sexo (0 = masc, 1 = fem, 2 = não declarado)das pessoas. Faça um programa que leia 50 dados diferentes e informe:? a maior e a menor altura encontradas;? a média de altura das mulheres;? a média de altura da população;? o percentual de homens na população


#include <stdio.h>

int main(){	
		
    float altura, maior_altura = 0, menor_altura = 1000, media_altura_mulheres = 0, media_altura_populacao = 0;
    int sexo, total_mulheres = 0, total_pessoas = 0;

    for (int i = 0; i < 50; i++) {
        printf("Informe a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);

        printf("Informe o sexo da pessoa %d (0 = masc, 1 = fem, 2 = não declarado): ", i + 1);
        scanf("%d", &sexo);

        if (altura > maior_altura) {
            maior_altura = altura;
        }

        if (altura < menor_altura) {
            menor_altura = altura;
        }

        if (sexo == 1) {
            media_altura_mulheres += altura;
            total_mulheres++;
        }

        media_altura_populacao += altura;
        total_pessoas++;
    }

    media_altura_populacao /= total_pessoas;
    
    printf("Maior altura encontrada: %.2f metros\n", maior_altura);
    printf("Menor altura encontrada: %.2f metros\n", menor_altura);
    
    if (total_mulheres > 0) {
        media_altura_mulheres /= total_mulheres;
        printf("Média de altura das mulheres: %.2f metros\n", media_altura_mulheres);
    } else {
        printf("Nenhuma mulher na amostra.\n");
    }

    printf("Média de altura da população: %.2f metros\n", media_altura_populacao);
    
    // Cálculo do percentual de homens na população
    float percentual_homens = ((float)(total_pessoas - total_mulheres) / total_pessoas) * 100;
    printf("Percentual de homens na população: %.2f%%\n", percentual_homens);

    return 0;
}










#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
	char Data_jogo;	
	char Time_mandante[20];
	char Time_visitante[20];
	int Gols_mandante;
	int Gols_visitante;
}jogo;


int main(){
	int i, o = 1, result;
	jogo j[5];
	for(i = 0; i < 5; i++){
		
	printf("data do jogo: ");
	scanf("%d", &j[i].Data_jogo);
	
	fflush(stdin);
	printf("time mandante: ");
	scanf("%[^\n]s", j[i].Time_mandante);
	
	fflush(stdin);
	printf("time visitante: ");
	scanf("%[^\n]s", j[i].Time_visitante);
	
	printf("gols mandante: ");
	scanf("%d", &j[i].Gols_mandante);
	
	printf("gols visitante: ");
	scanf("%d", &j[i].Gols_visitante);
	
	
	
	if(j[i].Gols_mandante > j[i].Gols_visitante){
		printf("Mandante ganhou\n");
	} else if (j[i].Gols_mandante < j[i].Gols_visitante){
		printf("visitante ganhou\n");
	} else {
		printf("empatou\n");
	}
	
	printf("outro Jogo\n\n");
	}
	
}

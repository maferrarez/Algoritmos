#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>




int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float notas[5][3], media[5];
	int   i, j;
	
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			
			printf("Insira a nota %i do aluno %i: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
			media[i] = media[i] + notas[i][j];
		}
		system("cls");
	}
	
	for(i=0; i<5; i++){
		media[i] = media[i] /3;
		printf("\nA média do aluno %i é: %.2f\n", i+1, media[i]);
	}

system("pause");
return 0;
}

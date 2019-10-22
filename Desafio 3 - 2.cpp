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
	

int i, j, matricula[15];
float notas[15][5], media[15], soma=0;

	for(i=0; i<15; i++){
		printf("\nInserir a matrícula do aluno: ");
		scanf("%i", &matricula[i]);
		for(j=0; j<5; j++){
			printf("\nInsira a %iª nota do aluno %i: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
			soma= soma + notas[i][j];
		}
		media[i] = soma/5;
		soma = 0;
		system("cls");
	}
	
	for(i=0; i<15; i++){
		printf("\nAluno %i - matricula: %i\n Média do aluno: %.2f", i+1, matricula[i], media[i]);
		if(media[i] >= 7){
			printf("\nAluno Aprovado.\n");}
			else if(media[i]<7){
			printf("\nAluno em recuperação.\n");}
		else{
			printf("Erro, tente de novo.\n");}}


system("pause");
return 0;
}

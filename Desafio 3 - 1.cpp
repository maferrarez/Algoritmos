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
	
	int i, N;
		printf("\nInforme o número de alunos: ");
		scanf("%i", &N);
		fflush(stdin);
		system("cls");
	
	int matricula[N];
	char nome[N][50];
	
	for(i=0; i<N; i++){
		printf("\nFavor informar o nome do aluno %i: ", i+1); 
		gets(nome[i]);
		fflush(stdin);
		printf("\nFavor informar a matrícula do aluno: ");
		scanf("%i", &matricula[i]);
		fflush(stdin);
		system("cls"); 
	}
	
	printf("\n\nNome do aluno:\t\t\tMatrícula do aluno:\n");
	for(i=0; i<N; i++){
	printf("%s\t\t\t\t%i\n", nome[i], matricula[i]);}



system("pause");
return 0;
}

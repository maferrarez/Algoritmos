  
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>
//		gets(a[i].nome);
//		fflush(stdin);


struct alunos {
	char nome[50]; 
	float n1, n2, p_e, media;
};


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i;
	struct alunos a[3];
	
	for(i=0; i<3; i++){
		printf("\nInsira o nome do aluno %i: ", i+1);
		gets(a[i].nome);
		fflush(stdin);
		
		printf("\nInsira a primeira nota do aluno %i: ", i+1);
		scanf("%f", &a[i].n1);
		fflush(stdin);
		
		printf("\nInsira a segunda nota: ", i+1);
		scanf("%f", &a[i].n2);
		fflush(stdin);
			
		printf("\nInsira a nota dos pontos extras: ", i+1);
		scanf("%f", &a[i].p_e);
		fflush(stdin);
		
		a[i].media = (a[i].n1+a[i].n2)/2 + a[i].p_e;
		if(a[i].media>10){
			a[i].media=10;
		}
		system("cls");
		fflush(stdin);
	}
	printf("\n\t\t\tMédia Final\n\n\n");
	for(i=0; i<3; i++){
		printf("\nAluno %i\nNome: %s\nMédia: %.2f\n", i+1, a[i].nome, a[i].media);
		}
	

system("pause");
return 0;
}

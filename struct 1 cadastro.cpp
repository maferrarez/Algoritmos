#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct cadastro {
	char nome[50], rua[50];
	int idade, numero;
};


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	struct cadastro p[4];
	int i=0;
	
	for(i=0; i<4; i++){
		printf("\nFavor informar o nome da %iª pessoa: ", i+1);
		gets(p[i].nome);
		fflush(stdin);
		printf("\nFavor informar a idade: ");
		scanf("%i", &p[i].idade);
		fflush(stdin);
		printf("\nInformar o endereço: ");
		gets(p[i].rua);
		fflush(stdin);
		printf("\nInforme o numero da casa: ");
		scanf("%i", &p[i].numero);	
		fflush(stdin);
		system("cls");	
	}
	
	for(i=0; i<4; i++){
		printf("\nDados cadastrados pessoa %i:\nNome: %s\nIdade: %i\nEndereço: %s\nNúmero: %i.\n", i, p[i].nome, p[i].idade, p[i].rua, p[i].numero);
		
	}



system("pause");
return 0;
}

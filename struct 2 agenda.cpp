#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct agenda{
	char nome[50], email[50], origem[30];
	int idade, telefone;
};


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, x;
	
	printf("Quantos contatos deseja cadastrar?\n");
	scanf("%i", &x);
	fflush(stdin);
	
	struct agenda a[x];
	
	for(i=0; i<x; i++){
		printf("\nInformar\n\nNome: ");
		gets(a[i].nome);
		fflush(stdin);
		
		printf("\nEmail: ");
		gets(a[i].email);
		fflush(stdin);
		
		printf("\nIdade: ");
		scanf("%i", &a[i].idade);
		fflush(stdin);
		
		printf("\nTelefone: ");
		scanf("%i", &a[i].telefone);
		fflush(stdin);
				
		printf("\nOrigem do relacionamento: ");
		gets(a[i].origem);
		fflush(stdin);
		system("cls");
	
	}
	
	for(i=0; i<x; i++){
	printf("\n\nDados Cadastrados:\nNome: %s\nEmail: %s\nIdade: %i\nTelefone: %i\nOrigem: %s", a[i].nome, a[i].email, a[i].idade, a[i].telefone, a[i].origem);
	}


system("pause");
return 0;
}

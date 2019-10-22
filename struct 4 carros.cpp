#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct carro{
	char nome[10], marca[15], cor[10];
	int ano;
	float preco;
};


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	struct carro c[5];
	int i;
	
	for(i=0; i<5; i++){
	printf("Informe os dados do carro %i:\nNome do carro: ", i+1);
	gets(c[i].nome);
	fflush(stdin);
	
	printf("\nMarca: ");
	gets(c[i].marca);
	fflush(stdin);

	printf("\nCor: ");
	gets(c[i].cor);
	fflush(stdin);

	printf("\nAno: ");
	scanf("%i", &c[i].ano);
	fflush(stdin);

	printf("\nPreço: ");
	scanf("%f", &c[i].preco);
	fflush(stdin);
	system("cls");

	}

	for(i=0; i<5; i++){
		printf("\nProdutos cadastrados:\nCarro n%i\nNome: %s\nMarca: %s\nCor: %s\nAno: %i\nPreço: R$%.2f\n\n", i+1, c[i].nome, c[i].marca, c[i].cor, c[i].ano, c[i].preco);
	}
system("pause");
return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct livro{
	char titulo[50], area[20];
	int ano, num_p; 
	float preco;
};


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i;
	struct livro l[5];
	float media_p;
	
	for(i=0; i<5; i++){
		printf("\nInforme o t�tulo do livro: ");
		gets(l[i].titulo);
		fflush(stdin);
		
		printf("\nInforme a �rea do livro (Inform�tica, auto ajuda, etc): ");
		gets(l[i].area);
		fflush(stdin);
		
		printf("\nAno de edi��o: ");
		scanf("%i", &l[i].ano);
		fflush(stdin);
		
		printf("\nInforme o n�mero de p�ginas: ");
		scanf("%i", &l[i].num_p);
		fflush(stdin);
		media_p = media_p + l[i].num_p;
		
		printf("\nPre�o do livro: R$");
		scanf("%f", &l[i].preco);
		fflush(stdin);
		
		system("cls");
	}
	
	media_p = media_p/5;
	printf("\nA m�dia do n�mero de p�ginas �: %.2f.\n\n", media_p);
	
system("pause");
return 0;
}

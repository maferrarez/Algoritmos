#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "MyBib.h"



int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, n, maior;
	
	printf("Insira o n�mero de fam�lias a serem analisadas: ");
	scanf("%i", &n);
	
	system("cls");
	float sal[n], media;

		for(i=0; i<n; i++){
			printf("\nInforme o sal�rio da fam�lia %i: ", i+1);
			scanf("%f", &sal[i]);	
		}
	
	media = media_sal(sal, n);
	maior = maior_sal(sal, n);
	printf("A m�dia salarial das fam�lias � de R$%.2f.\nO sal�rio mais alto � da familia n� %i.\n", media, maior);
	
system("pause");
return 0;
}


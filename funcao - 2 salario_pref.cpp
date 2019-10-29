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
	
	printf("Insira o número de famílias a serem analisadas: ");
	scanf("%i", &n);
	
	system("cls");
	float sal[n], media;

		for(i=0; i<n; i++){
			printf("\nInforme o salário da família %i: ", i+1);
			scanf("%f", &sal[i]);	
		}
	
	media = media_sal(sal, n);
	maior = maior_sal(sal, n);
	printf("A média salarial das famílias é de R$%.2f.\nO salário mais alto é da familia nº %i.\n", media, maior);
	
system("pause");
return 0;
}


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
	
	int i, j;
	float vendas[4][5], regiao[5], total;
	
	for(j=0; j<5; j++){
		for(i=0; i<4; i++){
			printf("\nInsira o valor de vendas do %i� Trimestre da regi�o %i: ", i+1, j+1);
			scanf("%f", &vendas[i][j]);
			total = total + vendas[i][j];
			regiao[j] = regiao[j] +vendas[i][j];
		}
		system("cls");
	}

	printf("\nO valor total de vendas �: %.2f.\n\n", total);
	for(j=0; j<5; j++){
		printf("O valor de venda da regi�o %.2f �: \n", regiao[j]);
	}
system("pause");
return 0;
}

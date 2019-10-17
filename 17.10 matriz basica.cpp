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


	int matriz[3][3], i, j, soma;
	
	for(i = 0; i<3; i++){
		for(j=0; j<3; j++){
			
			printf("Favor informar o valor da linha %i e da coluna %i: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
			soma = soma + matriz[i][j];
		}
	}
	
	printf("\tA soma total é: %i.\n\n", soma);
	

system("pause");
return 0;
}

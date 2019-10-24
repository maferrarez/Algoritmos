#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

float maior (float n1, float n2, float n3){
	float n_maior = 0.0;
	if(n1 >= n2 && n1>=n3){
		n_maior = n1;
	}
	else if(n3 >= n1 && n3 >= n2){
		n_maior = n3;
	}
	else if(n2 >= n1 && n2 >= n3){
		n_maior = n2;
	}
	return n_maior;
}



int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float n1, n2, n3, n_maior;
	
	printf("\nInsira o valor 1: ");
	scanf("%f", &n1);
	printf("\nInsira o valor 2: ");
	scanf("%f", &n2);
	printf("\nInsira o valor 3: ");
	scanf("%f", &n3);
	
	n_maior = maior(n1, n2, n3);
	printf("\nO maior valor é: %.2f", n_maior);	


system("pause");
return 0;
}

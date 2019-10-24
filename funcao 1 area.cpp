#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

float area_quad(float lado) {
	float result = 0.0;
	result = (lado*lado);
	return result;
}

float area_tri(float lado1, float lado2){
	float result = 0.0;
	result = (lado1*lado2)/2;
	return result;
}


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int opcao;
	float a, x, y, area=0;
	
	printf("Digite: \n\t0 - quadrado\n\t1 - Triângulo\n\n");
	scanf("%i", &opcao);
	switch(opcao){
		case 0:
			printf("\nInforme o valor do lado: ");
			scanf("%f", &a);
			area = area_quad(a);
		break;
		
		case 1:
			printf("\nInforme o valor do primeiro lado: ");
			scanf("%f", &x);
			printf("\nInforme o valor do lado: ");
			scanf("%f", &y);
			area = area_tri(x, y);
		break;
		
		default:
			printf("Erro, tente de novo.\n\n");
	}
	
	if(area != 0){
		printf("Valor da área é: %.2f.\n\n", area);
	}

system("pause");
return 0;
}

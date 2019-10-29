#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

float corrida (float km, float band){
	float result = 0;
	result = (km * band) +5.4;
	
	return result;
	
}

/*OUTRA OPÇÃO
float taxi (int op, float km){
	float result = 0;
	if(op == 1){
		result = 5.4 + km*2.7; 
	}
	else {
		result = 5.4 + km*3.3;
	}
	return result;
}
*/

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	float km, band, corrida1=0;
	int resp;
		
	printf("\nInforme o valor da bandeira (1 ou 2): ");
	scanf("%i", &resp);
	if(resp == 1){
		band = 2.7;
	}
	
	else if(resp == 2){
		band = 3.3;
	}
	
	else{
		printf("Erro, tente de novo.");
	}
	printf("\nInforme a quantidade de kilometros rodados: ");
	scanf("%f", &km);
	
	corrida1 = corrida(km, band);
	printf("Valor total da corrida R$%.2f.\n", corrida1);
	
	
	system("pause");
	return 0;
}

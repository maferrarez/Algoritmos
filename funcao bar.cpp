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
	
	int escolha1, n, quant;
	float t_conta, total_conta;
	char resp;
	
	printf("############################################################################################"
	"\n\n\t\t\t\tBEM VINDO AO BAR DA TIA MARINA\n\n"
	"#############################################################################################"
	"\n\n");
	
	resp = 's';
	
	while(resp == 's' || resp == 'S'){
	cabeca();
	menu();
	scanf("%i", &escolha1);
	if(escolha1 == 1){
		t_conta = cervejas(n, quant);
		printf("O valor é: %.2f\n\n", t_conta);
	}
	if(escolha1 == 2){
		t_conta = drinks(n, quant);
		printf("O valor é: %.2f\n\n", t_conta);
	}
	if(escolha1 == 3){
		t_conta = comidas(n, quant);
		printf("O valor é: %.2f\n\n", t_conta);
	}

	total_conta = total_conta + t_conta;
	printf("\n\nDeseja continuar a compra? (S - sim N - não)\t");
	scanf("%s", &resp);
	system("cls");
	n=0;
	quant=0;
	}
	
	cabeca();
	printf("\nO total final de sua compra é: %.2f\n", total_conta);
	printf("\n\n"
	"____________________________________________________________________________________________"
	"\n\n\n\t\t\t\tOBRIGADA PELA PREFERÊNCIA"
	"\n\n__________________________________________________________________________________________\n\n");	


system("pause");
return 0;
}

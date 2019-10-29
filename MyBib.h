#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>


float media_sal(float sal[], int n){
	float media =0;
	int i;
	for(i=0; i<n; i++){
		media = media + sal[i];
	}
	
	media = media / n;
	return media;
}

int maior_sal(float sal[], int n){
	float maior_s =0;
	int maior=0, i;
	for(i=0; i<n; i++){
	if(sal [i] > maior){
		maior_s = sal[i];
		maior = i;
	}}
	return maior;
}

void menu(){
	
	printf("\n\nESCOLHA UMA OPÇÃO ENTRE:"
	"\n\t1 \t-\tCERVEJAS"
	"\n\t2 \t-\tDRINKS"
	"\n\t3 \t-\tCOMIDINHAS"
	"\n\t4 \t-\tSOBREMESAS");
}

float cervejas(int n, int quant){
	float total, preco
	int n
	
	printf("########\t\t CERVEJAS \t\t#######"
	"\nTipo\t\t\tValor"
	"\n1 - Pilsen\t\tR$ 5,00"
	"\n2 - Summer Ale\t\tR$8,00"
	"\n3 - Ipa\t\tR$8,00"
	"\n4 - Saison\t\tR$10,00"
	"\n\n\nDigite sua opção: ");
	scanf("%i", &n);
	printf("\nQuantidade: ");
	scanf("%i", &)
	
	
}



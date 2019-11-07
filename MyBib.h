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

void cabeca(){
	printf("\nBAR DA TIA MARINA\n\n");
}

void menu(){
	
	printf("\n\nESCOLHA UMA OPÇÃO ENTRE:"
	"\n\t1 -\tCERVEJAS"
	"\n\t2 -\tDRINKS"
	"\n\t3 -\tCOMIDINHAS\n\n");
}

float cervejas(int n, int quant){
	float total=0, preco=0;
	
	printf("########\t\t CERVEJAS \t\t#######"
	"\n____________________________________________________________"
	"\n\nTipo\t\t\tValor"
	"\n\n1 - Pilsen\t\tR$ 5,00"
	"\n\n2 - Summer Ale\t\tR$8,00"
	"\n\n3 - Ipa\t\t\tR$8,00"
	"\n\n4 - Saison\t\tR$10,00"
	"\n____________________________________________________________\n"
	"\n\n\nDigite sua opção: \n\n");
	scanf("%i", &n);
	if(n ==1){
		preco = 5;
	}
	else if(n==2){
		preco = 8;
	}
	else if(n==3){
		preco = 8;
	}
	else if(n==4){
		preco = 10;
	}
	printf("\nQuantidade: ");
	scanf("%i", &quant);
	total = preco*quant;
	return total;
}

float drinks(int n, int quant){
	float total=0, preco=0;
	
	printf("########\t\t DRINKS \t\t#######"
	"\n____________________________________________________________"
	"\n\nTipo\t\t\t\tValor"
	"\n\n1 - To loka\t\t\tR$ 7,00"
	"\n\tVodka, sorvete de morango e leite condensado."
	"\n\n2 - Ave Mary\t\t\tR$10,00"
	"\n\tSuco de tomate, tequila e pimenta."
	"\n\n3 - Caipirinha\t\t\tR$4,00"
	"\n\tUm clássico, especial pro Brunão."
	"\n\n4 - Agua\t\t\tR$10,00"
	"\n\n5 - Refri/Suco\t\t\tR$15,00"
	"\n____________________________________________________________\n"
	"\n\n\nDigite sua opção: \n\n");
	scanf("%i", &n);
	if(n ==1){
		preco = 7;
	}
	else if(n==2){
		preco = 10;
	}
	else if(n==3){
		preco = 4;
	}
	else if(n==4){
		preco = 10;
	}
	else if(n==5){
		preco = 15;
	}
	printf("\nQuantidade: ");
	scanf("%i", &quant);
	total = preco*quant;
	return total;
}

float comidas(int n, int quant){
	float total=0, preco=0;
	
	printf("########\t\t COMIDAS \t\t#######"
	"\n____________________________________________________________"
	"\n\nTipo\t\t\t\t\tValor"
	"\n\n1 - Coxinha\t\t\t\tR$ 4,00"
	"\n\tCoxinha DA TOPE."
	"\n\n2 - Bolinho de aipim\t\t\tR$4,00"
	"\n\tTambém é bem TOPE."
	"\n\n3 - Montanha de bata\t\t\tR$17,00"
	"\n\tBatata frita com queijo, e mais queijo. TOPZERA."
	"\n\n4 - Empadinha\t\t\t\tR$6,00"
	"\n\tEmpadinha vegetariana da bem boa, TOPZS"
	"\n____________________________________________________________\n"
	"\n\n\nDigite sua opção: \n\n");
	scanf("%i", &n);
	if(n ==1){
		preco = 4;
	}
	else if(n==2){
		preco = 4;
	}
	else if(n==3){
		preco = 17;
	}
	else if(n==4){
		preco = 6;
	}
	printf("\nQuantidade: ");
	scanf("%i", &quant);
	total = preco*quant;
	return total;
}

void printVet(int *vet, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%i\n", vet[i]);
	}
}


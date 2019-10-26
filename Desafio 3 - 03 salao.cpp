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
	
	int i, pes, maos, podo;
	float fat[i];
	
	for(i=0; i <5; i++){
		printf("Favor informar a quantidade de serviços prestados da manicure %i:\nServiço 1- PÉS\t\t\t\tquantidade: ", i+1);
		scanf("%i", &pes);
		printf("\nServiço 2 - MÃOS\t\t\tquantidade: ");
		scanf("%i", &maos);
		printf("\nServiço 3 - PODOLOGIA\t\t\tquantidade: ");
		scanf("%i", &podo);
		fat[i] = (pes*35+maos*21+podo*80)/2;
		system("cls");
	}
		printf("Valor a receber ");
	for(i=0; i<5; i++){
		printf("\nmanicure %i: \tR$%.2f\n\n", i+1, fat[i]);
	}
	



system("pause");
return 0;
}

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
	
	float peso, peso_t = 0;
	
	
	while(peso_t < 100){
		printf("Insira o peso carregado no navio - em toneladas: ");
		scanf("%f", &peso);
		peso_t = peso_t + peso;
		if(peso_t > 100){
			printf("Limite do navio: 100 toneladas. Carga além do limite permitido pelo navio. ");
		}
	
	}
	
	printf("Carga ");

system("pause");
return 0;
}

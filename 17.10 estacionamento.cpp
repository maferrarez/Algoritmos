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
	
	int l,c; 
	float fat_t, fat_s[4], fat_d[4][6];

	for(l=0; l<4; l++){
		for(c=0; c<6; c++){
			printf("Favor inserir o valor faturado no dia %i da semana %i: ", c+1, l+1);
			scanf("%f", &fat_d[l][c]);
			fat_t = fat_t + fat_d[l][c];
			fat_s[l] = fat_s[l] + fat_d[l][c];
		}
		system("cls");
	}
	
	printf("total: %.2f\n", fat_t);
	for(l=0; l<4; l++){
		printf("semana %i: %.2f\n", l+1, fat_s[l]);
	}

system("pause");
return 0;
}

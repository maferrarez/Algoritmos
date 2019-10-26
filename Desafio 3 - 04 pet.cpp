/*4)	Um Pet Shop precisa de um relatório que contenha o nome do proprietário, o nome do animal e a espécie (cão, gato, papagaio, etc). Faça um programa 
em C que contenha 3 Vetores para guardar essas informações. Após realizar o cadastro de todos os clientes,  liste na tela o relatório para o proprietário do 
Pet Shop que apresente:
- Nome do Cliente
- Tipo que animal/ave que possuí.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>


struct pet{
	char n_prop[50], n_pet[50], especie[20];	 
};

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	struct pet p[3];
	int i;
	
	for(i=0; i<3; i++){
		printf("\nFavor informar o nome do proprietário: ");
		gets(p[i].n_prop);
		fflush(stdin);
		printf("\nFavor informar o nome do pet: ");
		gets(p[i].n_pet);
		fflush(stdin);
		printf("\nFavor informar a espécie do animal: ");
		gets(p[i].especie);
		fflush(stdin);
		system("cls");
	}
	
	printf("####Relatório final####");
	for(i=0; i<3; i++){
		printf("\n\n- Nome do Cliente: %s"
				"\n- Tipo que animal/ave que possuí: %s\n\n", p[i].n_prop, p[i].especie);
	}
	

system("pause");
return 0;
}

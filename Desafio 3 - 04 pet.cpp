/*4)	Um Pet Shop precisa de um relat�rio que contenha o nome do propriet�rio, o nome do animal e a esp�cie (c�o, gato, papagaio, etc). Fa�a um programa 
em C que contenha 3 Vetores para guardar essas informa��es. Ap�s realizar o cadastro de todos os clientes,  liste na tela o relat�rio para o propriet�rio do 
Pet Shop que apresente:
- Nome do Cliente
- Tipo que animal/ave que possu�.
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
		printf("\nFavor informar o nome do propriet�rio: ");
		gets(p[i].n_prop);
		fflush(stdin);
		printf("\nFavor informar o nome do pet: ");
		gets(p[i].n_pet);
		fflush(stdin);
		printf("\nFavor informar a esp�cie do animal: ");
		gets(p[i].especie);
		fflush(stdin);
		system("cls");
	}
	
	printf("####Relat�rio final####");
	for(i=0; i<3; i++){
		printf("\n\n- Nome do Cliente: %s"
				"\n- Tipo que animal/ave que possu�: %s\n\n", p[i].n_prop, p[i].especie);
	}
	

system("pause");
return 0;
}

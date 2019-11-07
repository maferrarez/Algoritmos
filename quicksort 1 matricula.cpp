#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

int particiona(int *V, int inicio, int fim){
	int esq, dir, pivo, aux;
	esq = inicio;
	dir = fim;
	pivo = V[inicio];
	while(esq<dir){
		while(V[esq]<=pivo)
			esq++;
		while(V[dir]>pivo)
			dir --;
		if(esq<dir){
			aux = V[esq];
			V[esq] = V[dir];
			V[dir] = aux;
		}
	}
	V[inicio] = V[dir];
	V[dir] = pivo;
	return dir;
}

void quickSort(int *V, int inicio, int fim){
		int pivo;
		if(fim>inicio){
			pivo = particiona(V, inicio, fim);
			quickSort(V, inicio, pivo-1);
			quickSort(V, pivo+1, fim);
		}
}

void printVet(int *vet, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%i\n", vet[i]);
	}
}

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int i, n;
	
		
	printf("Informe o número de alunos: ");
	scanf("%i", &n);
	system("cls");
	int matricula[n];
	
	for(i=0; i<n; i++){
		printf("Insira a matrícula do aluno %i\n", i+1);
		scanf("%i", &matricula[i]);
	}
	
	printf("\nNão ordenado: ");
	printVet(matricula, n);
	
	printf("\nOrdenado: ");
	quickSort(matricula, 0, n-1);
	printVet(matricula, n);

system("pause");
return 0;
}

/*Uma grande emissora de televis�o quer fazer uma enquete entre os seus telespectadores para saber qual o melhor jogador ap�s cada jogo. Para isto, 
faz-se necess�rio o desenvolvimento de um programa, que ser� utilizado pelas telefonistas, para a computa��o dos votos. Sua equipe foi contratada para 
desenvolver este programa, utilizando a linguagem de programa��o C. Para computar cada voto, a telefonista digitar� um n�mero, entre 1 e 23, correspondente 
ao n�mero da camisa do jogador. Um n�mero de jogador igual zero, indica que a vota��o foi encerrada. Se um n�mero inv�lido for digitado, o programa deve 
ignor�-lo, mostrando uma breve mensagem de aviso, e voltando a pedir outro n�mero. Ap�s o final da vota��o, o programa dever� exibir:
"	O total de votos computados;
"	Os n�mero e respectivos votos de todos os jogadores que receberam votos;
"	O percentual de votos de cada um destes jogadores;
"	O n�mero do jogador escolhido como o melhor jogador da partida, juntamente com o n�mero de votos e o percentual de votos dados a ele.
*/
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
	
	int i, n_c, t_votos;
	float soma[23], porc[23];
	
	for(i=0; i<23; i++){
		soma[i]=0;
		porc[i]=0;
	}
	t_votos =0;
	
	printf("Digite o n�mero da camisa do melhor jogador da partida (entre 1 e 23; digite 0 para sair): ");
	scanf("%i", &n_c);
	while(n_c !=0){
		if(n_c >=1 && n_c <=23){
		if(n_c = 1){
			i = 1;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 2){
			i = 2;
			soma[i] = soma[i]+1;
		}
		else if(n_c = 3){
			i = 3;
			soma[i] = soma[i]+1;
		}
		else if(n_c = 4){
			i = 4;
			soma[i] = soma[i]+1;
		}
		else if(n_c = 5){
			i = n_c;
			soma[i] = soma[i]+1;
		}
		else if(n_c = 6){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 7){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 8){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 9){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 10){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 11){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 12){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 13){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 14){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 15){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 16){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 17){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 18){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 19){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 20){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 21){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 22){
			i = n_c;
			soma[i] = soma[i]+1;
			i=0;
		}
		else if(n_c = 23){
			i = n_c;
			soma[i] = soma[i]+1;		
			i=0;
		}
		}
		else {
		printf("Informe um valor entre 1 e 23 ou 0 para sair!");}
		i=0;
	t_votos = t_votos+1;
	printf("\nDigite o n�mero da camisa do melhor jogador da partida: ");
	scanf("%i", &n_c);
	}
	
	for(i=0; i <23; i++){
		if(soma[i]!=0){
			porc[i]= soma[i]/t_votos;
			printf("Jogador %i total de votos: %.2f porcentagem: %.2f.\n", i+1, soma[i], porc[i]);
	}}
	printf("Total de votos: %i", t_votos);

system("pause");
return 0;
}

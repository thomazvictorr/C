#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (int argc, char *argv[]){

	setlocale (LC_ALL, "Portuguese");
	int opcao;
	float total,cotarDolar,quantDolar,quantReal;
	
	printf("#### CONVERSOR DE MOEDA ####\n\n\n");
	printf("Qual a cota��o do dolar na data de hoje?\n");	
	scanf("%f", &cotarDolar);
	system("cls");
	
	printf("#### CONVERSOR DE MOEDA ####\n\n\n");
	printf("Qual moeda voc� deseja converter?\n");
	printf("1: D�lar para Real\n");
	printf("2: Real para D�lar\n");
	scanf("%d", &opcao);	
	system ("cls");
		
	switch(opcao){
		case 1:
			printf("#### CONVERSOR DE MOEDA ####\n\n\n");
			printf("Dol�r para Real\n");
			printf("Qual valor voc� deseja converter?\n");
			printf("US$: ");
			scanf("%f" , &quantDolar);
			total = (cotarDolar*quantDolar);
			printf("Total da convers�o - R$: %.2f\n",total);
		break;
		
		case 2:
			printf("#### CONVERSOR DE MOEDA ####\n\n\n");
			printf("Real para D�lar\n");
			printf("Qual valor voc� deseja converter?\n");
			printf("R$: ");
			scanf("%f" , &quantReal);
			total = (quantReal/cotarDolar);
			printf("Total da convers�o - US$: %.2f\n",total);
		break;
		
		default:
		printf("Essa op��o n�o est� dispon�vel!\n"); // fim da sele��o
		system("pause");
		break;
}		
	system("pause");
	return 0;
}

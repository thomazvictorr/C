#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (int argc, char *argv[]){

	setlocale (LC_ALL, "Portuguese");
	int opcao;
	float total,cotarDolar,quantDolar,quantReal;
	
	printf("#### CONVERSOR DE MOEDA ####\n\n\n");
	printf("Qual a cotação do dolar na data de hoje?\n");	
	scanf("%f", &cotarDolar);
	system("cls");
	
	printf("#### CONVERSOR DE MOEDA ####\n\n\n");
	printf("Qual moeda você deseja converter?\n");
	printf("1: Dólar para Real\n");
	printf("2: Real para Dólar\n");
	scanf("%d", &opcao);	
	system ("cls");
		
	switch(opcao){
		case 1:
			printf("#### CONVERSOR DE MOEDA ####\n\n\n");
			printf("Dolár para Real\n");
			printf("Qual valor você deseja converter?\n");
			printf("US$: ");
			scanf("%f" , &quantDolar);
			total = (cotarDolar*quantDolar);
			printf("Total da conversão - R$: %.2f\n",total);
		break;
		
		case 2:
			printf("#### CONVERSOR DE MOEDA ####\n\n\n");
			printf("Real para Dólar\n");
			printf("Qual valor você deseja converter?\n");
			printf("R$: ");
			scanf("%f" , &quantReal);
			total = (quantReal/cotarDolar);
			printf("Total da conversão - US$: %.2f\n",total);
		break;
		
		default:
		printf("Essa opção não está disponível!\n"); // fim da seleção
		system("pause");
		break;
}		
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (int argc, char *argv[]){  // evoluindo em switch case, projeto simples de uma calculadora em C

	setlocale (LC_ALL, "Portuguese");
	int opcao;
	float num1, num2, total;
	
	printf("#### CALCULADORA ####\n\n");
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	system ("cls");
	
	printf("#### CALCULADORA ####\n\n");
	printf("Escolha o tipo de Operação Matemática:\n");
	printf("1: Adição\n");
	printf("2: Subtração\n");
	printf("3: Multiplicação\n");
	printf("4: Divisão\n");
	scanf("%d", &opcao);
	system("cls");

	switch(opcao){
		case 1:
			printf("#### CALCULADORA ####\n\n");
			printf("O resultado da Soma corresponde á\n");
			total = (num1 + num2);
			printf("Resultado: %.f\n\n", total);
		break;
			
		case 2:
			printf("#### CALCULADORA ####\n\n");
			printf("O resultado da Subtração corresponde á\n");
			total = (num1 - num2);
			printf("Resultado: %.f\n\n", total);
		break;
			
		case 3:
			printf("#### CALCULADORA ####\n\n");
			printf("O resultado da Multiplicação corresponde á\n");
			total = (num1*num2);
			printf("Resultado: %.f\n\n", total);
		break;
			
		case 4:
			if (num2 != 0) {
            printf("#### CALCULADORA ####\n\n");
            printf("O resultado da Divisão corresponde á\n");
            total = (num1/num2);
			printf("Resultado: %.f\n\n", total); 
		 } else {
         	printf("#### CALCULADORA ####\n\n");
            printf("Divisão por zero não é permitida.\n\n");
         }
		break;

		default:
		printf("#### CALCULADORA ####\n\n");
		printf("Essa opção não está disponível!\n\n"); // fim da seleção
		system("pause");
		break;
}
	system("pause");
	return 0;
}

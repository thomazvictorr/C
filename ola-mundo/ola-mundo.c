#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[])
{
	setlocale (LC_ALL, "Portuguese");
	printf("Olá, Mundo!\n\n\n");
	system("pause");
	return 0;	
}

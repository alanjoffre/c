#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int i;
	
	printf("Insira um número inteiro de 1 a 5\n");
	scanf("%i", &i);

	switch (i){
		case 1:
			printf("primeiro\n");
			break;
		case 2:
			printf("segundo\n");
			break;
		case 3:
			printf("terceiro\n");
			break;
		case 4:
			printf("quarto\n");
			break;
		case 5:
			printf("quinto\n");
			break;
		default:
			printf("Opção inválida!");
	}

	return 0;
    
}

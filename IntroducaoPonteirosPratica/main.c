#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	int x = 10;
	int *ponteiro;
	ponteiro = &x;
	
	int y = 20;
	*ponteiro = y;
		
	printf("%i %i \n", x, y);
	
	//Criando um ponteiro
	//int *ponteiro;
	//ponteiro = &x;
	
	//Valor contido na variavel
	//printf("Valor da vari�vel X (x): %i\n", x);
	
	//Endere�o de memoria
	//printf("Endere�o de mem�ria da variavel X (&x): %i\n\n", &x);
	
	//Valor contido dentro do endere�o de memoria (variavel)
	//printf("Valor contido dentro do ponteiro (*ponteiro): %i\n", *ponteiro);
	
	//Endere�o de memoria
	//printf("Endere�o de mem�ria do ponteiro (ponteiro): %i\n", ponteiro);
	
	getchar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
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
	//printf("Valor da variável X (x): %i\n", x);
	
	//Endereço de memoria
	//printf("Endereço de memória da variavel X (&x): %i\n\n", &x);
	
	//Valor contido dentro do endereço de memoria (variavel)
	//printf("Valor contido dentro do ponteiro (*ponteiro): %i\n", *ponteiro);
	
	//Endereço de memoria
	//printf("Endereço de memória do ponteiro (ponteiro): %i\n", ponteiro);
	
	getchar();
    return 0;
}

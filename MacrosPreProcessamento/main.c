#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

//Caso x for maior que y, retorne x, caso n�o retorne y
//Ao definir a macro atente para: NOME(), coloque o nome perto dos parenteses
//Caso contr�rio dar� erro
#define MAIOR(x, y) x > y ? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'


int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	char x = 'a';
	
	if(E_MINUSCULO (x)) {
		printf("� uma letra minuscula\n");		
	}else{
		printf("N�o � uma letra minuscula\n");
	}
	
	printf("%i\n", MAIOR(10,50));
	
	getchar();
    return 0;
}


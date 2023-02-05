#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

//Caso x for maior que y, retorne x, caso não retorne y
//Ao definir a macro atente para: NOME(), coloque o nome perto dos parenteses
//Caso contrário dará erro
#define MAIOR(x, y) x > y ? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'


int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	char x = 'a';
	
	if(E_MINUSCULO (x)) {
		printf("É uma letra minuscula\n");		
	}else{
		printf("Não é uma letra minuscula\n");
	}
	
	printf("%i\n", MAIOR(10,50));
	
	getchar();
    return 0;
}


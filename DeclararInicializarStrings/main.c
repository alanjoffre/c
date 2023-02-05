#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");

	//Formas de declarar Strings
	
	//char palavra[6] = {'B', 'r', 'a', 's', 'i', 'l'}; //Sem o caracter nulo, não é impresso corretamente. \0
	//char palavra[] = {'b', 'r', 'a', 's', 'i', 'l'};  //Sem o caracter nulo, não é impresso corretamente. \0
	//char palavra[7] = {"Brasil\0"};
	//char palavra[] = {"Brasil\0"};
	char palavra[] = "Brasil\0";
	
	
	//char palavra[] = "Brasil";
	//Quantos caracteres tem acima?
	//Resposta certa 7, por causa do \0 (considera apenas um)	
	
	//Carcarter nulo
	//   \0
	
	printf("\t\t%s\n", palavra);	

	system("pause");
    return 0;
}



#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
	
	char palavra[100];
    printf("DIGITE SEU NOME: ");
    gets(palavra);
    printf("\nO NOME DIGITADO FOI >> %s\n\n",palavra);	
	
	system("pause");
    return 0;
}

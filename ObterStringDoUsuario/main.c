#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
	
	char nome[20];
	char sobrenome[20];
	
	printf("insira seu nome e sobrenome:\n");
	scanf("%s%s", &nome, &sobrenome);
	
	printf("%s %s\n", nome, sobrenome);

	system("pause");
    return 0;
}



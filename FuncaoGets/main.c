#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
	
	char x[10];
	char y[10];
	
	//Tem que tomare cuidado
	//O vetor foi declarado com tamanho 10
	//Gets permite digitar quantos caracteres quiser
	//N�o recomendado	
	gets(x);
	
	printf("%s", x);
				
	return 0;
}

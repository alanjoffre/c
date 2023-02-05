#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");

	int tamanhoString(char string []);
	char stringUsuario[20];
	
	printf("Digite uma palavra (string): \n");
	scanf("%s", stringUsuario);
	
	int num = tamanhoString(stringUsuario);
	
	printf("A string %s possui %i caracteres. \n", stringUsuario, num);
	
	system("pause");
    return 0;
}

int tamanhoString(char string[]){
	
	int numCaracteres = 0;
	
	while(string[numCaracteres] != '\0'){
		++numCaracteres;	
	}
	return numCaracteres;
}



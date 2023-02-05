#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	int vetor [3] = {1,2,3};
	//Não é necessário informar o tamanho do ponteiro
	//Não é necessário passar &vetor
	//A liunguagem ja interpreta
	//int *ponteiro = vetor;
	
	int *ponteiro = &vetor[2];
	
	//Automaticamente o ponteiro aponta para o primeiro valor do vetor
	printf("%i", *ponteiro);
	
	getchar();
    return 0;
}

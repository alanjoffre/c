#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	int vetor [3] = {1,2,3};
	//N�o � necess�rio informar o tamanho do ponteiro
	//N�o � necess�rio passar &vetor
	//A liunguagem ja interpreta
	//int *ponteiro = vetor;
	
	int *ponteiro = &vetor[2];
	
	//Automaticamente o ponteiro aponta para o primeiro valor do vetor
	printf("%i", *ponteiro);
	
	getchar();
    return 0;
}

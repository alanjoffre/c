#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	int vetor [3] = {1,2,3};
	
	//Alterar um valor do vetor atraves do ponteiro
	int *ponteiro = vetor;
	*(ponteiro + 1) = 10;//ponteiro na posi��o 1, passa a ter valor 10
	printf("%i\n", vetor[1]);
	
	//Um vetor ocupa espac�os subsequentes de mem�ria: 4, 8, 12, 13
	
	//int *ponteiro = &vetor[0];
	//Incrementou +1 a posi��o do ponteiro
	//++ponteiro;//posi��o 1 valor 2 do vetor
	//++ponteiro;//posi��o 2 valor 3 do vetor
	//printf("%i\n", *ponteiro);
	
	//printf("%p\n", ponteiro);
	//ponteiro = &vetor[1];
	//printf("%p\n", ponteiro);
	
	//ponteiro = &vetor[2];
	//printf("%p\n", ponteiro);	
	
	//int *ponteiro = vetor;
	//printf("Valor do ponteiro: %i\n", *ponteiro);
	//printf("Valor do endere�o: %p\n",  ponteiro);
	
	getchar();
    return 0;
}

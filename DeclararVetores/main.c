#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
	
    setlocale(LC_ALL, "Portuguese");

	int vetor [5] = {5, 2, 4, 1, };
	//vetor[0] = 1;
	//int vetor [5] = {0} Zera todos os valores do Vetor
	
	int i;
	
	for (i = 0; i < 5; ++i){
		printf("%i\n", vetor[i]);
	}
	
	system("pause");//� necess�rio a biblioteca <stdlib.h>
	
	return 0;
    
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string


int main(void) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    //malloc = memory allocation
  	int *p = (int *) malloc(sizeof(int));
  	
  	//Controle para verificar se o espa�o em memoria foi n�o foi alocado!
  	if (p == NULL){
  		printf("Malloc n�o funcionou");
	}
  	
  	*p = 1000;
  	
  	printf("%i", *p);	
	 
	return 0;
}


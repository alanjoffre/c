#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string


int main(void) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
  	int *p = (int *) malloc(sizeof(int));
  	
  	//Controle para verificar se o espaço em memoria foi não foi alocado!
  	if (p == NULL){
  		printf("Malloc não funcionou");
	}
  	
  	*p = 1000;
  	
  	printf("%i", *p);
	  
	//O endereço do ponteiro é perdido, mas o conteudo continua como lixo
	free(p);  	
	 
	return 0;
}
	 


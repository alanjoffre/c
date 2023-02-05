#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string
#define NUMERO_MAXIMO_ALUNOS 1000

void umaFuncao(void){
	//printf("%i\n", 1000);
	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
}

void umaOutraFuncao(void){
	//printf("%i\n", 1000);
	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
}


int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
  	void umaOutraFuncao(void);
	void umaFuncao(void);
		
	//printf("%i\n", 2000);
	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
	
	umaFuncao();
	umaOutraFuncao();	

	getchar();
    return 0;
}

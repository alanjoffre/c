#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int gVariavelGlobal = 2;

void teste(void){
	
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *= 2;
	
	gVariavelGlobal *= 2;
	
	printf("Local Automática = %i\n", variavelLocalAutomatica);
	printf("Local Estática   = %i\n\n", variavelLocalEstatica);
	printf("Global = %i\n\n", gVariavelGlobal);
	
}


int main (void){
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Global = %i\n\n", gVariavelGlobal);
    
    teste();   
 	teste();
 	teste();
	
	return 0;
	
}

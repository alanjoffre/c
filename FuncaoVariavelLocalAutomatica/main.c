#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

void teste(void){
	
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	printf("%i\n", variavelLocalAutomatica);
	
}


int main (void){
	
    setlocale(LC_ALL, "Portuguese");
    
    teste();   
	teste();
	teste(); 
	
	return 0;
	
}

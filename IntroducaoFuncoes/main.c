#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

void imprimaMensagem(void){
	
	printf("teste");	
	
}

int main(){
	
    setlocale(LC_ALL, "Portuguese");
    
    imprimaMensagem();
		 
	return 0;
	
}



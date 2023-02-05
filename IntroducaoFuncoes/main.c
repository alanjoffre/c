#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

void imprimaMensagem(void){
	
	printf("teste");	
	
}

int main(){
	
    setlocale(LC_ALL, "Portuguese");
    
    imprimaMensagem();
		 
	return 0;
	
}



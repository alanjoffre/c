#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    void alfabetico(char variavel);
	
	char nome[20];
	printf("Digite uma palavra: ");
	scanf("%s", nome);
	
	int i = 0;
	while(nome[i] != '\0') {
		alfabetico(nome[i]);
		++i;
	}	

	system("pause");
    return 0;
}

void alfabetico (char variavel){
	
	if((variavel >= 'a' && variavel <= 'z') ||
	   (variavel >= 'A' && variavel <= 'Z')){
		printf("� uma letra\n");		
	}else{
		printf("N�o � uma letra\n");
	}
	
}

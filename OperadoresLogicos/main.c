#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");

	int idade;
	
	printf("sua idade\n");
	scanf("%i", &idade);
	
	// Comando &&  = E
	// Comando || = ou
	
	

	if(idade >= 20 && idade <= 40){
		printf("deu certo\n");
	}else{
		printf("não deu certo\n");	
	}

	system("pause");
    return 0;
}



#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
		int x = 136;
		
		//Tabela ASCII
		// 97 = a
		//136 ^		
				
		printf("%c ", x);
	
	getchar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
  	//D� overflow
	//N�o vai compilar  
 	//short x = 2147483647;
 	//short y = -2147483648;
 	
 	//Valor limite da variavel
 	 int x = 2147483647;
 	 int y = -2147483648;
 	
 	printf("%i\n", x);
 	printf("%i\n", y);
  	  	  
	getchar();
    return 0;
}



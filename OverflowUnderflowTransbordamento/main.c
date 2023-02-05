#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
  	//Dá overflow
	//Não vai compilar  
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



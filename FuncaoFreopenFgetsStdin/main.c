#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
 
 	char x[100];
 	
 	fgets(x, 100, stdin);
 	printf("%s", x);
 		
 	freopen("Arquivo1.txt", "r", stdin);
 	fgets(x, 100, stdin);
 	printf("%s", x);	 
	 	
	return 0;
}

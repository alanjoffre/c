// Func��es freopen e fgets / stdin

#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
 
 	char x[100];
 	
 	FILE *file = fopen("Arquivo1.txt", "r");
 	
 	fgets(x, 100, file);
 	printf("%s\n", x);
 	
 	freopen("Arquivo2.txt", "r", file);
 	fgets(x, 100, file);
 	printf("%s\n", x);
 	 	
	return 0;
}

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
	
	int i = 0;
	
	//EOF: End of file: Final do arquivo
	//while ((x[i] = fgetc(file)) != EOF){
	while ((x[i] = getc(file)) != EOF){
		++i;
	}
	
	x[i] = '\0';
	printf("%s", x);
	
 	return 0;
}


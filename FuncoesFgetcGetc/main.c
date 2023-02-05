#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
 
	char x[100];
	
	int i = 0;
	while ((x[i] = fgetc(stdin)) != '\n'){
		++i;
	}
	
	x[++i] = '\0';
	printf("%s", x);
	
	//x[0] = fgetc(stdin);
	//printf("%c", x[0]);
	 	 	
	return 0;
}

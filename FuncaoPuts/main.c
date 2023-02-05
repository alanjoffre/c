#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
	
	//Pula linha automaticamente
	//puts("Mortadela");
	//puts("Mortadela");
	
	char x[] = "casa";
	
	puts(x);
				
	return 0;
}

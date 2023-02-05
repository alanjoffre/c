#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

void copiarString(char *copiarDaqui, char *colarAqui){
	
	while(*copiarDaqui != '\0') {
		*colarAqui = *copiarDaqui;	
		++copiarDaqui;
		++colarAqui;	
	}
	colarAqui = '\0';
}

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	void copiarString(char *copiarDaqui, char *colarAqui);
	
	char string1[] = "Pão com mortadela";
	char string2[20];
	
	copiarString(string1, string2);
	printf("%s\n", string2);

	getchar();
    return 0;
}

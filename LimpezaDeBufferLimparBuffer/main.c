#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

void limparBuffer(void){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    void limparBuffer(void);
    
	char a, b, c;
	
	a = getchar();
	limparBuffer();
	b = getchar();
	limparBuffer();
	c = getchar();
	limparBuffer();
	
	printf("%c", a);
	printf("%c", b);
	printf("%c", c);
						
	return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
	
	//char x[10];
	
	//x[0] = getchar();
	//printf("%c", x[0]);
	
	//int i = 0;
	//while ((x[i] = getchar()) != '\n' && i < 8) {
	//	++i;
	//}
	//
	//x[++i] = '\0';
	//
	//printf("%s", x);
	
	char x;
	
	while ((x = getchar()) != '\n'){
		putchar(x);
	}
						
	return 0;
}

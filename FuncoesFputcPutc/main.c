#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
	
	char x[] = "coxinha";
	
	FILE *file = fopen("Arquivo1.txt", "w");
	
	int i = 0;
	while (x[i] != '\0') {
		putc(x[i], file);
			++i;
	}
	
	//int i = 0;
	//while (x[i] != '\0') {
	//	putc(x[i], stdout);
	//		++i;
	//}
	
	//Para escrever no arquivo TXT
	//putc(x[5], file);
	
	//Para mostra na janela do Sistema Operacional
	//putc(x[5], stdout);
	//putc('a', stdout);	
	
	return 0;
}

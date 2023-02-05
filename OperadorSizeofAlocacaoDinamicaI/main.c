#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

struct x{
	int a, b, c;
};

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    struct x estrutura; 
    
	//int x;
	//double y;
	
	int vetor[10];
	
	printf("Tamanho da Estrutura >>>>>>>>>>>>>>>>>: %li\n", sizeof(estrutura));
	printf("Tamanho do vetor[10] >>>>>>>>>>>>>>>>>: %li\n", sizeof(vetor));
	printf("Tamanho de uma variável do tipo INT   : %li\n", sizeof(int));
	printf("Tamanho de uma variável do tipo DOUBLE: %li\n", sizeof(double));
	printf("Tamanho de uma variável do tipo FLOAT : %li\n", sizeof(float));
	printf("Tamanho de uma variável do tipo SHORT : %li\n", sizeof(short));

	return 0;
}

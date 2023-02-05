#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	//Uma forma
	//int *pX;
	//pX = &x; //Significa que o endere�o de memoria do ponteiro X � igual ao endere�o de mom�ria da variavel x
	
	//Outra forma
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	//Somar valores do meu ponteiro
	double soma = *pX + *pY;
	
	//N�o d� para somar endere�os de mem�ria
	//double soma = pX + pY;
	
	int *resultado;
	resultado = 6487540;
	
	printf("Valor x = %i\n", *resultado);
	printf("O valor da soma entre ponteiros (pX + pY) �: %.2f\n", soma);
	printf("Endere�o x = %i - Valor x = %i\n", pX, *pX);
	printf("Endere�o y = %i - Valor y = %.2f\n", pY, *pY);
	printf("Endere�o z = %i - Valor z = %c\n", pZ, *pZ);
	
	getchar();
    return 0;
}

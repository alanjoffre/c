#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
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
	//pX = &x; //Significa que o endereço de memoria do ponteiro X é igual ao endereço de momória da variavel x
	
	//Outra forma
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	//Somar valores do meu ponteiro
	double soma = *pX + *pY;
	
	//Não dá para somar endereços de memória
	//double soma = pX + pY;
	
	int *resultado;
	resultado = 6487540;
	
	printf("Valor x = %i\n", *resultado);
	printf("O valor da soma entre ponteiros (pX + pY) é: %.2f\n", soma);
	printf("Endereço x = %i - Valor x = %i\n", pX, *pX);
	printf("Endereço y = %i - Valor y = %.2f\n", pY, *pY);
	printf("Endereço z = %i - Valor z = %c\n", pZ, *pZ);
	
	getchar();
    return 0;
}

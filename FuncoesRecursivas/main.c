#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

int fatorial (int x){
	int resultado;
	if(x == 0){
		resultado = 1;
	}else {
		resultado = x * fatorial(x -1);	
	}
	return resultado;
}


int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int fatorial (int x);
	int numero, resultado;
	
	printf("Digite um n�mero inteiro:\n");
	scanf("%i", &numero);
	
	resultado = fatorial(numero);
		
	printf("O fatorial � %i\n\n", resultado);
		
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

float calcularAreaRetang (float base, float altura){
	float area = base * altura;
	return area;
}

int main (void){
	
    setlocale(LC_ALL, "Portuguese");
    
    float area = calcularAreaRetang (10.0, 20.0);
		 
	printf("A �rea do retangulo �: %0.2f", area);
	
	return 0;
	
}



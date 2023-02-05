#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

float calcularAreaRetang (float base, float altura){
	float area = base * altura;
	return area;
}

int main (void){
	
    setlocale(LC_ALL, "Portuguese");
    
    float area = calcularAreaRetang (10.0, 20.0);
		 
	printf("A área do retangulo é: %0.2f", area);
	
	return 0;
	
}



#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean


float somaDeDigitos(float num1, float num2){
	
	float valorAbsoluto (float x);
	
	if(num1 < 0){
		num1 = valorAbsoluto(num1);
	}
	if(num2 < 0){
		num2 = valorAbsoluto(num2);
	}
	
	return num1 + num2;
}

float valorAbsoluto (float x){
	
	return x * -1;
	
}


int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float somaDeDigitos(float num1, float num2);
	float a, b, soma;
	
	printf("Digite 2 numeros: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	
	soma = somaDeDigitos(a, b);
	
	printf("A soma é: %.2f\n\n", soma);
	
	system("pause");
	return 0;
}

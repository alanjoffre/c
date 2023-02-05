#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	/*
	char variavelChar = 'a';
	printf("%c\n", variavelChar);
	scanf("%c", &variavelChar);
	printf("%c\n", variavelChar);
	*/
	
	/*
	bool variavelBoll = false;
	//aceita apenas 0 e 1
	//true ou false
	// 0 = não
	// 1 = sim
	//Quando utilizar tipo bool, incluir a biblioteca <stdboll.h>
	printf("%i\n", variavelBoll);
	*/
	
	/*
	int variavelInt = 10;
	//long int variavelInt = 1045678912345; Para números extensos
	//const int variavelInt = 10; Declarando um número que não poderá alterar
	printf("%i\n", variavelInt);
	scanf("%i", &variavelInt);
	printf("%i\n", variavelInt);
	*/
	
	/*
	float variavelFloat = 10.10;
	printf("%f\n", variavelFloat);
	scanf("%f", &variavelFloat);
	printf("%f\n", variavelFloat);
	*/
	
	/*
	double variavelDouble = 10.10;
	//const double variavelDouble = 10.10; Valor fixado
	//unsigned double variavelDouble = 10.10; Limita apenas para valor positivos
	printf("%f\n", variavelDouble);
	scanf("%lf", &variavelDouble);
	printf("%f\n", variavelDouble);
	*/
			
	return 0;
    
}

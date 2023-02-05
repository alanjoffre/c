#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int main (void){
	
	int intVar = 9999999;
	int intVar2 = 10;
	double doubleVar = 100.123456789;
	
	//Formatacao variaveis inteiras
	printf("Variavel inteira (%%d) = %d\n", intVar);
	printf("Variavel inteira (%%i) = %i\n", intVar);
	printf("Variavel inteira (%%x) = %x\n", intVar);//Está na base 16
	printf("Variavel inteira (%%o) = %o\n", intVar);//Esta na base 8	
	printf("\n");
	
	//Formatacao variaveis float e double
	printf("Variavel double (%%f) = %0.2f\n", doubleVar);
	printf("Variavel double (%%e) = %e\n", doubleVar);
	printf("Variavel double (%%g) = %g\n", doubleVar);//Está na base 16
	printf("Variavel double (%%a) = %a\n", doubleVar);//Esta na base 8	
	printf("\n");
	
	system("pause");
	
	return 0;
}

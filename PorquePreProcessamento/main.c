#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string


//N�o pode colocar ; depois da variavel, d� erro!
#define PI 3.14159

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	printf("%f\n", PI);

	getchar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string


//Não pode colocar ; depois da variavel, dá erro!
#define PI 3.14159

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	printf("%f\n", PI);

	getchar();
    return 0;
}

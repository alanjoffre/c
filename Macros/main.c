#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

#define PI 3.14159
#define DOIS_PI 2 * PI
#define AREA_CIRCULO(raio) raio * raio * PI

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	printf("Valor de PI      : %f\n", PI);
	printf("Valor de Dois PI : %f\n", DOIS_PI);
	printf("AREA DO CIRCULO  : %f\n", AREA_CIRCULO(10));

	getchar();
    return 0;
}


#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string
#define PI 3.14159
#define NULO 0

double areaCirculo (double raio){
	return raio * raio * PI;	
}

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	double areaCirculo (double raio);
	double r;
	int i = 1;//número de vezes que repita o programa
	
	while (i != NULO){
		printf("\t\t\tDigite o raio do circulo:");
		scanf("%lf", &r);
		printf("\t\t\tA area do circulo é: %lf\n", areaCirculo(r));
		--i;
	}
	getchar();
    return 0;
}

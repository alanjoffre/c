#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string
#define SIM 100
#define NAO -100

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
  	int x;
  	printf("Digite um n�mero inteiro:");
  	scanf("%i", &x);
  	
  	if(x <=10){
  		printf("%i", NAO);
  	} else {
  	printf("%i", SIM);	
	}

	getchar();
    return 0;
}

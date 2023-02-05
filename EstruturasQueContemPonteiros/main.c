#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
    struct horario{
    	int *pHora;
    	int *pMinuto;
    	int *pSegundo;
    };
  
  	struct horario hoje;
  	
  	int hora = 200;
  	int minuto = 300;
  	int segundo = 400;
  	
  	hoje.pHora = &hora;
  	hoje.pMinuto = &minuto; 
  	hoje.pSegundo = &segundo; 
	  
  	printf("Hora    - %i\n", *hoje.pHora);
  	printf("Minuto  - %i\n", *hoje.pMinuto);	
	printf("Segundo - %i\n", *hoje.pSegundo);  

	*hoje.pSegundo = 1000;
	
	printf("Segundo - %i\n", *hoje.pSegundo);  
	  
	getchar();
    return 0;
}

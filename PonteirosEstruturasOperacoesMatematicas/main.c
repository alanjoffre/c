#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    struct horario{
    	int hora;
    	int minuto;
    	int segundo;
	};

	struct horario agora, *depois;
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 80;
	depois->segundo = 50;

	int somatorio = 100;
	
	struct horario antes;
	
	antes.hora = somatorio + depois->segundo;
	antes.minuto = agora.hora + depois->minuto;
	antes.segundo = depois->minuto + depois->segundo;
	
	printf("\t\t\tEstrutura antes  >>> %i hh: %i mm: %i ss\n", antes.hora, antes.minuto, antes.segundo);
	printf("\t\t\tEstrutura depois >>>  %i hh:  %i mm:  %i ss\n", agora.hora, agora.minuto, agora.segundo);

	getchar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
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
	
	//Uma forma
	//(*depois).hora = 20;
	//(*depois).minuto = 20;
	//(*depois).segundo = 20;
	
	//Outra forma
	depois->hora = 20;
	depois->minuto = 20;
	depois->segundo = 20;
	
	printf("\t\t\t%i hh: %i mm: %i ss", agora.hora, agora.minuto, agora.segundo);

	getchar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int main(){
    setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    struct horario{
    	int horas;
    	int minutos;
    	int segundos;
    //segunda forma de declarar as variaveis	
	}agora = {10, 20, 30};
	
	//terceira forma de declarar as variaveis
	//struct horario agora = {10, 20, 30};
	
	//quarta forma de declarar as variaveis
	//struct horario agora = {.segundos = 30, .minutos = 20, .horas = 10};
		
	//Primeira forma de declarar as variaveis
	//struct horario agora;
	//agora.horas = 10;
	//agora.minutos = 20;
	//agora.segundos = 30;
       
    printf("\t\t%i hrs: %i min: %i seg\n\n", agora.horas,
							 agora.minutos,
							 agora.segundos);   
       
    system("pause");
    return 0;
}



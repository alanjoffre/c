#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
    setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    struct horario{
    	
    	int horas;
    	int minutos;
    	int segundos;
    };
    
    struct horario agora;
    
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;
    
    printf("\t\t%i horas: %i min: %i segundos\n\n", agora.horas, agora.minutos, agora.segundos);
        
        system("pause");
    return 0;
}


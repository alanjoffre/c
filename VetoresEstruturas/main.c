#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int main(){
    setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    struct horario{
    	int hora;
    	int minuto;
    	int segundo;
    };
	
     struct horario teste[5] = { {10, 20, 30}, {20, 30, 40}, {30, 40, 50}, {40, 50, 60}, {50, 60, 70} }; 
	 
	  int i;
	  for(i = 0; i < 5; ++i){
	  	printf("\t\t%i hrs: %i min: %i seg\n\n", teste[i].hora, 
	 						   				     teste[i].minuto, 
	 						                     teste[i].segundo);
	  }
	 
	 //Um forma de declarar as variaveis do vetor
	 //teste[0].hora = 10;
	 //teste[0].minuto = 20;
	 //teste[0].segundo = 30;
	 //
	 //printf("\t\t%i hrs: %i min: %i seg\n\n", teste[0].hora = 10,
	 //						   				  teste[0].minuto = 20,
	 //						                  teste[0].segundo = 30);
       
    system("pause");
    return 0;
}


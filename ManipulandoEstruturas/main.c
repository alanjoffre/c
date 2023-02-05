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
    	double teste;
    	char letra;
    };
    
    struct horario agora;
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;
    
    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
	depois.segundos = agora.segundos;
	depois.teste = 50.55 / 123;
	depois.letra = 'a';
	 
    printf("\t\t%i hrs: %i min: %i seg \n\n", depois.horas, depois.minutos, depois.segundos);
    printf("\t\tResultado da divisão: %.2f\n\n", depois.teste);
    printf("\t\tConteúdo da váriável Letra: %c\n\n", depois.letra);
        
        system("pause");
    return 0;
}

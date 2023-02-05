#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	/*
	bits = 0 ou 1
	1 byte = 8bits

	Falando sobre memoria
	Memoria é organizada em sequencia de bytes ( 8 bits ) ou seja cada endereço na memoria ocupa 1 bytes ( 8bits )

	int x ->  reserva 4 bytes na memoria porque um int ocupa 4 bytes ( 32bits)
	*/
	
	getchar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
    setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	int x = 16;
	int y =3;
					  //Casting	resultado ser� 5.333333, sem o casting seria 5.0000							
	float resultado = (float)x / y;
	
	printf("%f\n", resultado);
        
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
	
    setlocale(LC_ALL, "Portuguese");

	int nota [5];
	
	nota[0] = 10;
	nota[1] = 5;
	nota[2] = 4;
	nota[3] = 2;
	nota[4] = 7;
	
	printf("%i\n", nota[4]);
	
	system("pause");//É necessário a biblioteca <stdlib.h>
	
	return 0;
    
}


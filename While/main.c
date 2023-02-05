#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int contador = 1;
	
	while (contador <=5){
		printf("%i\n", contador);
		++contador;		
	}
	   
    return 0;
    
}

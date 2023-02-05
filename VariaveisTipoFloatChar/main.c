#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int inteira = 10;
    float decimal = 10.5;
    char caractere = '0';
	
	printf("%i\n", inteira);
	printf("%0.2f\n", decimal);
	printf("%c\n", caractere);
	    
    return 0;
    
}

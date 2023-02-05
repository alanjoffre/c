#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, altura, area;
    base = altura = area = 0;
    
    printf("\nDigite o valor da base:\n");
    scanf("%i", &base);
    
    printf("\nDigite o valor da altura:\n");
    scanf("%i", &altura);
    
    area = base * altura;
	
	printf("\nO valor da área do retangulo é = %i\n", area);
	    
    return 0;
}

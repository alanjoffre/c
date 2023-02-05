#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1 = 5;
	float num2 = 2;
	float resultado = num1 / num2;
	
	printf("%0.2f\n", resultado);
	   
    return 0;
    
}

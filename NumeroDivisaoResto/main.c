#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int num1, num2;
	printf("Digite 2 números inteiros:\n");
	scanf("%i %i", &num1, &num2);
	
	if(num2 == 0)
		printf("Divisao por 0 não é permitido.\n");
		
	if (num1 % num2 != 0)
		printf("%i Não é divisivel por %i \n", num1, num2);
	
	else{
		if (num1 % num2 == 0){
			printf("%i é divisivel por %i \n", num1, num2);
			}
			
	}

	return 0;
    
}

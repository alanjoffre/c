#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int numero, cifra;
	
	printf("Digite um n?mero inteiro:\n");
	scanf("%i", &numero);
	
	if (numero >=0){
		do{
			cifra = numero % 10;
			printf("%i", cifra);
			numero /= 10;
		} while (numero !=0);
			printf("\n");
	}
	
	else if (numero < 1){
		numero = numero * -1;
		
		printf("-");
		
		do{
			cifra = numero % 10;
			printf("%i", cifra);
			numero /= 10;
		} while (numero !=0);
			printf("\n");
	}
		
	return 0;
    
}


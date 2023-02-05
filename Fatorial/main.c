#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int numero;
	int fatorial;
	int resposta = 1;
			
	printf("Digite um número para descobrir seu fatorial\n");
	scanf("%i", &fatorial);
	
	numero = fatorial;
	
	for (; fatorial > 0 ; --fatorial){
		
	//resposta = resposta * fatorial; 	
	resposta *= fatorial;
	
	}

	printf("O fatorial de %i é: %i\n", numero, resposta);
	
	return 0;
    
}

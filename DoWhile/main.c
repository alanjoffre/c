#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	
	//Verifica a condi��o, depois fa�a o que � pedido!
	int i = 0;
	while (i != 0){
		printf("Teste\n");
	}
	
	//Fa�a primeiro o quer � pedido, depois verifica a condi��o!
	do{
		printf("Teste 2\n");
	}while (i != 0);
	
	return 0;
    
}

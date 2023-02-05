#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	
	//Verifica a condição, depois faça o que é pedido!
	int i = 0;
	while (i != 0){
		printf("Teste\n");
	}
	
	//Faça primeiro o quer é pedido, depois verifica a condição!
	do{
		printf("Teste 2\n");
	}while (i != 0);
	
	return 0;
    
}

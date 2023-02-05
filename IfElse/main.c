#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int idade;
	
	printf("Favor informar idade:\n");
	scanf("%i", &idade);
	
	if(idade < 18){
		printf("Bebidas alcoólocas não estão liberadas.\n");
	} else {
		printf("Bebidas alcoólicas estão liberadas.\n");
	}	

	return 0;
    
}

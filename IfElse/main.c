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
		printf("Bebidas alco�locas n�o est�o liberadas.\n");
	} else {
		printf("Bebidas alco�licas est�o liberadas.\n");
	}	

	return 0;
    
}

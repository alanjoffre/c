#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int idade;
	printf("informar idade\n");
	scanf("%i", &idade);
	
	if(idade <= 5)
		printf("bebê\n");
	else if(idade > 5 && idade <= 10)
		printf("Criança\n");
	else if(idade > 10 && idade <= 18)
		printf("Adolescente\n");
	else if(idade > 18 && idade <= 50)
		printf("Adulto\n");
	else if(idade > 50)
		printf("Idoso\n");

	return 0;
    
}

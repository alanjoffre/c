#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
	
    setlocale(LC_ALL, "Portuguese");

	float notas[5] = {0};
	float total = 0;
	float media = 0;
	int i;
	
	printf("Insira 5 notas:\n");
	
	for (i = 0; i < 5; ++i)
	scanf("%f\n", &notas[i]);
	
	for (i = 0; i < 5; ++i)
		total += notas[i];
	
	media = total / 5;
	
	printf("A media do aluno �: %0.2f\n\n", media);
	
	system("pause");//� necess�rio a biblioteca <stdlib.h>
	
	return 0;
    
}

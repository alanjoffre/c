#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(void){
	
    setlocale(LC_ALL, "Portuguese");

	int i, j;

	for (i = 1; i <= 10; ++i ){
		printf("**Volta %i**\n", i);
		for(j = 1; j <= 10; ++j){
		printf("Ponto %i\n", j);	
		}
		printf("\n");
	}
			
	return 0;
    
}

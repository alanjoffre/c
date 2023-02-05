#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

void funcaoPrint(int x[3] [3]) {
//No minimo tem que passar o tamanho das colunas

	int i, j;
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			printf("%i ", x[i] [j]);
		}
		printf("\n");
	}
}

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	//void funcaoPrint(int x[3] [3]);
	
	int matriz [3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	funcaoPrint(matriz);
	
	int i, j;
	
	printf("\n");
	system("pause");
	return 0;
}


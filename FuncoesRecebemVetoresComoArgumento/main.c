#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

void ordemCrescente(int vetor[], int n){
		
	int i, j, temporaria;
		
	for (i = 0; i < n; ++i){
		for(j = i + 1; j < n; ++j){
			if(vetor[i] > vetor[j]){
			temporaria = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = temporaria;
			}
		}
	}		
}

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetor [10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
	int i;
	
	void ordemCrescente(int vetor[], int n);	
	ordemCrescente(vetor, 10);
	
	for(i = 0; i < 10; ++i){
		printf("%i ", vetor[i]);
	}
	
	printf("\n\n");	
	system("pause");
	return 0;
}



#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int somarVetor(int vetor[], const int n){
	
	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + n; //ponteiro apontando para o primeiro valor do vetor e com o "+ n", informa a considerar todos os itens do vetor - Todos os membros do Vetor
	
	for(ponteiro = vetor; ponteiro < finalVetor; ++ponteiro){
		soma += *ponteiro;
	}
	
	return soma;	
}

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	int somarVetor(int vetor[], const int n);
	int vetor[10] = {5,5,5,5,5,5,5,5,5,5};
	
	printf("A soma dos membros do vetor = %i", somarVetor(vetor, 10));	

	getchar();
    return 0;
}

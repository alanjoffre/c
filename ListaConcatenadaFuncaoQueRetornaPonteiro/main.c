#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

struct lista{
	int valor;
	struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor){
	
	while(pLista != (struct lista *)0) {
		   if(pLista->valor == valor) {
		   		return(pLista);
		   } else {
		   pLista = pLista->proximo;	
		   }	
		}
	return(struct lista *) 0;
}

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	struct lista *procurarValor(struct lista *pLista, int valor);
	struct lista m1, m2, m3;
	struct lista *resultado, *gancho = &m1;
	int valor;
	
	m1.valor = 5;
	m2.valor = 10;
	m3.valor = 15;
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = 0;
	
	printf("Digite o valor da pesquisa: ");
	scanf("%i", &valor);
	
	resultado = procurarValor(gancho, valor);
	
	if(resultado == (struct lista *) 0){
		printf("Valor não encontrado. \n");		
	} else {
		printf("Valor %i encontrado. \n", resultado->valor);
	}
	
	getchar();
    return 0;
}

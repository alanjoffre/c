#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
  	void testeVariavel(int x);
  	void testePonteiro(int *pX);
  	int teste = 1;
  	int *pTeste = &teste;
  	
  	//testeVariavel(teste);
  	
	//Neste caso passamos o endereço de memória
	testePonteiro(pTeste);
	
	/*
	função testePonteiro recebe valorPonteiro *pX
	teste é inicializada com valor = 1
	valor de ponteiro *pTeste é igual ao conteudo da variavel teste igual a 1
	*pTeste = 1
	a função testePonteiro recebe o endereço do ponteiro pTeste
	Agora a variavel teste é dominada pelo ponteiro pTeste
	Com isto, quando passamos o valor do ponteiro *pX, e depois ++*pX, ela controla e altera o valor
	Inicial da varialvel teste = 1 para teste = 2
	*/  	
	
  	printf("%i\n", teste);
  	  	  
	getchar();
    return 0;
}

void testeVariavel(int x){
	++x;
	//testeVariavel de x, é uma variavel independente!
	//Não é a variavel x la de cima
	//printf("%i\n", x);
}

void testePonteiro(int *pX){
	++*pX;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
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
  	
	//Neste caso passamos o endere�o de mem�ria
	testePonteiro(pTeste);
	
	/*
	fun��o testePonteiro recebe valorPonteiro *pX
	teste � inicializada com valor = 1
	valor de ponteiro *pTeste � igual ao conteudo da variavel teste igual a 1
	*pTeste = 1
	a fun��o testePonteiro recebe o endere�o do ponteiro pTeste
	Agora a variavel teste � dominada pelo ponteiro pTeste
	Com isto, quando passamos o valor do ponteiro *pX, e depois ++*pX, ela controla e altera o valor
	Inicial da varialvel teste = 1 para teste = 2
	*/  	
	
  	printf("%i\n", teste);
  	  	  
	getchar();
    return 0;
}

void testeVariavel(int x){
	++x;
	//testeVariavel de x, � uma variavel independente!
	//N�o � a variavel x la de cima
	//printf("%i\n", x);
}

void testePonteiro(int *pX){
	++*pX;
}

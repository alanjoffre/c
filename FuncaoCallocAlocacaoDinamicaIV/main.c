#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string


int main(void) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    int *p;
    
    //Est� alocando 10 x 4 = 40 bites de memoria
    //Caloc inicia o endere�o de mem�ria com zero
  	//p = (int *) calloc(5, sizeof(int));
	p = (int *) malloc(5 * sizeof(int));
  	
  	int i;
  	for(i = 0; i < 5; ++i){
  		printf("Endere�o de p%i = %p | Valor de p%i = %i\n", i, &p[i], i, *(p+1));
	  }
  	
  	
  	
  	//Acessar o primeiro valor
  	//*p = 10;
  	
  	//Acessar o segundo valor
  	//*(p+1) = 10;
  	
  	//p = (int *) malloc(10 * sizeof(int));
  	
  	//Print no primeiro valor do ponteiro
   	//printf("%i\n", *p);
	
	//Print no segundo valor do ponteiro
   	//printf("%i\n", *(p+1));
   	
   	//Outra forma de acessar os valores do ponteiro
   	//printf("%i\n", p[1]);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string


int main(void) {
	
	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
    int *p;
    
    //Está alocando 10 x 4 = 40 bites de memoria
    //Caloc inicia o endereço de memória com zero
  	//p = (int *) calloc(5, sizeof(int));
	p = (int *) malloc(5 * sizeof(int));
  	
  	int i;
  	for(i = 0; i < 5; ++i){
  		printf("Endereço de p%i = %p | Valor de p%i = %i\n", i, &p[i], i, *(p+1));
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

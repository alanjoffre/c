#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
	
    setlocale(LC_ALL, "Portuguese");
    
    int m;
    int n;

	int matriz [5] [5] = {{ 1,  2,  3,  4,  5},
						  { 6,  7,  8,  9, 10},
						  {11, 12, 13, 14, 15},
						  {16, 17, 18, 19, 20},
						  {21, 22, 23, 24, 25}};
	
	for (m= 0; m < 5; ++m){
		for (n = 0; n < 5; ++n){
			printf("\t%i ", matriz[m] [n]);
			}
		
		printf("\n");
			
	}					  
	
	system("pause");//É necessário a biblioteca <stdlib.h>
	
	return 0;
    
}

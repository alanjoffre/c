#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
	
    setlocale(LC_ALL, "Portuguese");

	int matriz [3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// linhas x colunas (bidimencional)
	
	//int matriz [3] [3] = {{1, 2, 3}
	//						{4, 5, 6}
	//						{7, 8, 9}};
	
	printf("%i\n", matriz [0] [0]);
		
	system("pause");//É necessário a biblioteca <stdlib.h>
	
	return 0;
    
}

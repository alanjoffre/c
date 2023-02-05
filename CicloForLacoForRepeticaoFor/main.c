#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int contador;
	int numero = 1;
	
//  for(valor inicial, rode enquanto, incremento)	
	for (contador = 1; contador <=10; ++contador){
		printf("teste\n");		
	}
	   
    return 0;
    
}


#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
 
 	FILE *file;
	
	//para ler (r)
	//para escrever (w)
	//para alterar (a)
	//� necess�rio acrescentar mais uma barra no diret�rio, para que o complilador entenda
		 
	file = fopen("string.txt", "r" ); 
	
	//O programa verifica se encontrou o arquivo apontado
	//Caso n�o exista, encerrer� o programa 
	if(file == NULL){
		printf("Arquivo n�o pode ser aberto\n");
		getchar();
		exit(0);		
	}
	
	char frase[100];
	
	while(fgets(frase, 100, file) != NULL){
		printf("%s", frase);
	}
	
	printf("\n");
	fclose(file);
	system("pause");
    return 0;
}

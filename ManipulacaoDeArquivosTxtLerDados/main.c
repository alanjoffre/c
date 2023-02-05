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
		 
	file = fopen("numero.txt", "r" ); 
	
	//O programa verifica se encontrou o arquivo apontado
	//Caso n�o exista, encerrer� o programa 
	if(file == NULL){
		printf("Arquivo n�o pode ser aberto\n");
		system("pause");
		return 0;		
	}
	
	int x, y, z;
	
	//fun��o fscanf
	//Informar o nome do ponteiro, que no caso � file
	fscanf(file, "%i  %i  %i", &x, &y, &z);
	
	printf("%i  %i  %i\n", x, y, z);
	
	fclose(file);
	system("pause");
    return 0;
}

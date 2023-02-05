#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
 
 	FILE *file;
	
	//para ler (r)
	//para escrever (w)
	//para alterar (a)
	//É necessário acrescentar mais uma barra no diretório, para que o complilador entenda
		 
	file = fopen("string.txt", "r" ); 
	
	//O programa verifica se encontrou o arquivo apontado
	//Caso não exista, encerrerá o programa 
	if(file == NULL){
		printf("Arquivo não pode ser aberto\n");
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

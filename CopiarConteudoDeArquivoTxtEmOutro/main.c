#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

void copiarConteudo(FILE *file1, FILE *file2){
	
	char leitor [1000];
	
	while (fgets(leitor, 1000, file1) != NULL)
	
	fputs(leitor, file2);
}

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
 
 	void copiarConteudo(FILE *file1, FILE *file2);
 	
	//para ler (r) // escrever (w) //para alterar (a)
	//É necessário acrescentar mais uma barra no diretório, para que o complilador entenda
		 
	FILE *file1 = fopen("Arquivo1.txt", "r" );  
	
	//O programa verifica se encontrou o arquivo apontado
	//Caso não exista, encerrerá o programa 
	if(file1 == NULL){
		printf("Arquivo não pode ser aberto\n");
		return 1;		
	}
	
	FILE *file2 = fopen("Arquivo2.txt", "w");  
	
	copiarConteudo(file1, file2);
		
	fclose(file1);
	fclose(file2);
	
	return 0;
}


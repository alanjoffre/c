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
	file = fopen("D:\\TI\\Cursos\\C\\ManipulacaoDeArquivosTxtEscreverDados\\teste.txt", "w" ); 
	fprintf(file, "P�o com mortadela.");
	fclose(file);

    return 0;
}

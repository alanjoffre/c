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
	file = fopen("D:\\TI\\Cursos\\C\\ManipulacaoDeArquivosTxtEscreverDados\\teste.txt", "w" ); 
	fprintf(file, "Pão com mortadela.");
	fclose(file);

    return 0;
}

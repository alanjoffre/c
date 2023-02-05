#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	printf("www.facebook.com/DeAlunoParaAluno\n");
	
	//Tinha compilador que fechava a janela ao executar o comando printf
	//Com o comando, a janela abre, e necessita que pressione uma tecla para prosseguir
	//Windows = Pause  Linux = ls
	//system("pause");
	//O recomendado independete do So é usar
	//Funciona em: Windows, Linux e MAC
	//Boas praticas, nâo é recomendado utilizar system("pause")
	getchar();
    return 0;
}

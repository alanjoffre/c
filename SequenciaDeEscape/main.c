#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	printf("DeAlunoParaAluno\a");
	
	/*
	\a Alarme sonoro do sistema
	\b Move o cursor uma posi��o � esquerda
	\n Pula para a pr�xima linha
	\t Tecla TAB
	\r Volta para o inicio da linha
	\0 Caractere nulo ou zero, geralmente estabelecido como fim de string
	\" Corresponde ai caractere "
	\' Corresponde ao caractere'	
	*/	
	
	getchar();
    return 0;
}

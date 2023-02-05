#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

struct dicionario{
	char palavra[20];
	char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[]){
	
	int i = 0;
	while(palavra1[i] == palavra2[i]
		      && palavra1[i] != '\0'
		      && palavra2[i] != '\0') {
		      	++i;
	}
	
	if (palavra1[i] == '\0' && palavra2[i] == '\0'){
		return true;
	}else{
		return false;
	}
}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras){
	
	bool compararStrings(const char palavra1[], const char palavra2[]);
	
	int i = 0;
	while (i < numDePalavras){
		
		if(compararStrings(procurar, lingua[i].palavra)){
			return i;
		}else{
			++i;
		}
	}
	return -1;
}

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);
	
	//Por defini��o vari�vel constante � escrita em LETRAMAIUSCULA, ou seja, valor n�o muda!
	const int NUMERODEDEFINICOES = 7;
	char palavra[20] = {'\0'};
	int resultadoPesquisa;
	
	//Dependendo com compilador n�o ser� permitido a declara��o
	//const struct dicionario portugues[NUMERODEDEFINICOES]  = {{"pao", "Comida de farinha"},
	const struct dicionario portugues[7]  = {{"pao", "Comida de farinha"},
															  {"mortadela", "Comida de carne"},
															  {"feijao", "Comida brasileira"},
															  {"tropero", "Tipo de feijao"},
															  {"queijo", "De Minas"},
															  {"macarronada", "Tipico de v�"},
															  {"pizza", "Tipico da Italia"}};
															  
	printf("\t\t\tDigite uma palavra: ");
	scanf("%s", palavra);
	
	resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);
	
	if (resultadoPesquisa != -1){
		printf("\t\t\tConceito: %s\n", portugues[resultadoPesquisa].definicao);
	}else{
		printf("Palavra n�o encontrada");
	}
	
	getchar();
    return 0;
}

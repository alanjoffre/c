#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");

	void concatenarStrings(char string1[], int t1,
						   char string2[], int t2,
						   char string3[]);
	
	char palavra1[] = {'p', 'a', 'o', ' '};
	char palavra2[] = {'m', 'o', 'r', 't', 'a', 'd', 'e', 'l', 'a' };
	char novaPalavra[13];
	
	concatenarStrings(palavra1, 4, palavra2, 9, novaPalavra);
		
	int i;
	for (i = 0; i < 13; ++i){
		printf("%c", novaPalavra[i]);
	}
	
	printf("\n");
	system("pause");
    return 0;
}

void concatenarStrings(char string1[], int t1,
					   char string2[], int t2,
					   char string3[]){
	int i, j;
	for(i = 0; i < t1; ++i){
		string3[i]	 = string1[i];
	}
					   	
	for(j = 0; j < t2; ++j){
		string3[t1 + j] = string2[j];			
	}
	
}		   
						   

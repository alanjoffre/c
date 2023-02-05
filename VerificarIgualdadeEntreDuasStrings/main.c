#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");

	_Bool stringsIguais(char s1[], char s2[]);
	
	if(stringsIguais("casa", "cosa")) {
		printf("\t\tsão iguais\n\n");
	} else {
		printf("\t\tnão são iguais\n\n");
	}
	
	system("pause");
    return 0;
}

_Bool stringsIguais(char s1[], char s2[]){
	
	int i = 0;
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		// c == c && c != \0 && c != \0    palavra casa por isto o c
		++i;
	} 
	if(s1[i] == '\0' && s2[i] == '\0'){
		return 1;
	}else{
		return 0;
	}
}

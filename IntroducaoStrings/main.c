#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");

	char teste[] = {'b', 'r', 'a', 's', 'i', 'l'};
	
	int i;
	for(i = 0; i < 6; ++i){
		printf("%c", teste[i]);
	}
	printf("\n");

	system("pause");
    return 0;
}


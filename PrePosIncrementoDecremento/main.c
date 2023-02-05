#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
  
	int x = 1;
	int y = 0;
	
	y = ++x;
	
	//y = x++;
	//x = x + 1;
	
	printf("x = %i\n", x);
	printf("y = %i\n", y);
	
	getchar();
    return 0;
}

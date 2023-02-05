#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <string.h>//biblioteca para tipo string

int main(void){

	setlocale(LC_ALL, "portuguese");
    system("color F0");
    
	int i;
	for(i = 1; i <= 20; ++i){
		if(i % 3 == 0 && i % 9 == 0){
			printf("%i divisivel por 3 e 9\n");	
			break;		
		}else{
			printf("%i não é\n", i);	
		}
	}
	
	getchar();
    return 0;
}






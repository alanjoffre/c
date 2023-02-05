#include <stdio.h>
#include <stdlib.h>//biblioteca para utilização da função pause
#include <locale.h>//biblioteca para acentuação
#include <stdbool.h>//biblioteca para tipo boolean
#include <conio.h>

struct horario{
       int hora;
       int minuto;
       int segundo;
       };

void receberHorarios(struct horario lista[5]){
     
	 int i;
     
     for(i = 0; i < 5; i++)
     {
           printf("\t\t\t\tInforme o %d º horário (hh:mm:ss): ", i + 1);
           scanf("%d:%d:%d", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);
     }
     
     }

void printfHorarios(struct horario lista[5]){
     
	 int i;
     
     for(i = 0; i < 5; i++)
     {
           
           printf("\t\t\t\t\tO %d º horário é: %d:%d:%d\n", i + 1, lista[i].hora, lista[i].minuto, lista[i].segundo);
     }
     
     
     }

int main(){

	setlocale(LC_ALL, "portuguese");
    system("color F0");

 	//void receberHorarios(struct horario lista[5]);
    //void printfHorarios(struct horario lista[5])
    struct horario listaHorarios[5];
    
    receberHorarios(listaHorarios);
    printfHorarios(listaHorarios);

	getch();
    return 0;
}


#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
	
    setlocale(LC_ALL, "Portuguese");
          
    const int numeroDeAlunos = 4;
	const int bimestresAnuais = 4;
	float notasAlunos[4][4] = {0};
	float mediasAlunos [4]= {0};
	float media = 0;
	int aluno, notas;
    
    printf("Insira as 4 notas do aluno 1:\n");
    for (aluno = 0; aluno < numeroDeAlunos; ++aluno){
	   	for(notas = 0; notas < bimestresAnuais; ++notas){
			scanf("%f", &notasAlunos[aluno][notas]);
			
			media += notasAlunos[aluno][notas];	   		
		   }
		
		mediasAlunos[aluno] = media / bimestresAnuais;
		media = 0;
		
		if (aluno+2 > numeroDeAlunos)
            break; // for�a a interrup��o do ciclo for neste ponto se aluno for 5
		
		printf("Insira as notas do aluno %d:\n", aluno +2);
	}
	
	for(aluno = 0; aluno < numeroDeAlunos; aluno++)
		printf("As medias do aluno %d � : %.2f\n", aluno +1, mediasAlunos [aluno]);		
	
	system("pause");//� necess�rio a biblioteca <stdlib.h>
	
	return 0;
	
}
   
    


#include <stdio.h>
#include <stdlib.h>//biblioteca para utiliza��o da fun��o pause
#include <locale.h>//biblioteca para acentua��o
#include <stdbool.h>//biblioteca para tipo boolean

int main(void){
    setlocale(LC_ALL, "portuguese");
    system("color F0");

        void FunctionScanf(int vet1[]);
        void FunctionPrintf(int y, int vet1[]);
        int x = 10;
        int vetor[3];
        int c2;

    FunctionScanf(vetor);

            printf("\n\t\t OS N�MEROS DIGITADOS FORAM: \n");
            printf("\n\t\t\t VALOR DE X: [%i] \n", x);
            printf("\t\t\t VALORES DO VETOR DE 3 BLOCOS: \n\t\t\t ");
            for(c2 = 0; c2 < 3; ++c2){
                printf("[%i] ", vetor[c2]);
            }
            printf("\n\n\n");

            printf("\t\t Vari�vel INT X na Fun��o principal = [%i] \n", x);
            printf("\t\t Valor do Vetor na Posi��o [0] pela Fun��o principal = [%i] \n", vetor[0]);

    FunctionPrintf(x, vetor); 
// INTRODUZ O VALOR DA VARI�VEL LOCAL X DA FUN��O (main) NA VARI�VEL LOCAL Y DA
// FUN��O (FunctionPrintf) E OS VALORES DO VETOR LOCAL (vetor) DENTRO DO VETOR 
// (vet1) DA FUN��O (FunctionPrintf)  

            //printf("\n\n\ \n\n\n");

    system("pause");
    return 0;
}

void FunctionScanf(int vet1[]){
 // INTRODUZ 1 VALOR EM CADA UM DOS 3 BLOCOS DO vetor[3]

	int c1;
	
    printf("\n\t\t DIGITE 3 N�MEROS PARA O VETOR DE 3 BLOCOS: ...\n\n");
    for(c1 = 0; c1 < 3; ++c1){
        printf("\t\t ");
        scanf("%i", &vet1[c1]);
    }

}

void FunctionPrintf(int y, int vet1[]){
    y += y;
    vet1[0] += vet1[0];

    printf("\n\n\t\t Vari�vel X INT na Fun��o Print �: = [%i] \n", y);
    printf("\t\t O Valor do Vetor na posi��o [0] pela Fun��o Print �: = [%i] \n\n", vet1[0]);
} 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int minhaIdade, maeIdade, paiIdade, irmaoIdade, idadeTotal; 
    
    minhaIdade = 20;
    maeIdade = 40;
    paiIdade = 45;
    irmaoIdade = 15;
    
	idadeTotal = minhaIdade + maeIdade + paiIdade + irmaoIdade;

    printf("A idade total é = %i\n", idadeTotal);

	system("pause");
    return 0;
}


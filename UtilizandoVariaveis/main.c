#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int minhaIdade, maeIdade, paiIdade;
    
    minhaIdade = 23;
	maeIdade = 48;
	paiIdade = 49;

    printf("Minha idade é = %i\nPai idade = %i\nMae idade = %i\n",
		    minhaIdade, paiIdade, maeIdade);

	system("pause");
    return 0;
}

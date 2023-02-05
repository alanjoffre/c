#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int minhaIdade;
    minhaIdade = 23;

    printf("Minha idade é = %i\n", minhaIdade);

	system("pause");
    return 0;
}

#include <stdio.h>
int main()
{
    int vetor[10];
    int soma = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("A soma dos numeros digitados e: %d\n", soma);
    return 0;

}

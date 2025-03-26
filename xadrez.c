#include <stdio.h>

// Função Movimento Torre
void Torre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        Torre(casas - 1);
    }
}

// Função Movimento Bispo
void Bispo(int casas)
{
    if (casas > 0)
    {
        printf("Cima\n");
        Bispo(casas - 1);
    }
}

// Função Movimento Rainha
void Rainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        Rainha(casas - 1);
    }
}

int main()
{
    // Movendo Torre cinco casas para a direita
    printf("Torre\n");

    Torre(5);

    printf("\n");

    // Movendo Bispo cinco casas para a direita
    printf("Bispo\n");

    Bispo(5);

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // Movendo Rainha oito casas para a esquerda
    printf("Rainha\n");

    Rainha(8);

    printf("\n");

    // Movendo Cavalo duas casas para baixo e uma para a esquerda

    printf("Cavalo\n");

    for (int i = 0; i < 2; i++)
    {
        if (i > 2)
            continue;
        printf("Cima\n");

        if (i >= 1)
            break;
    }

    printf("Direita\n");

    return 0;
}
/*3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?*/
#include <stdio.h>


int main(void)
{
    int soma = 0, indice = 12;

    for (int K = 1; K < indice; ++K)
    {
        soma += K;
    }

    printf("SOMA: %d\n", soma); 

    return 0;
}

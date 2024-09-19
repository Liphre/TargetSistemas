#include <stdio.h>

int main(void) 
{
    int i;

    //lista A)
    int listaA = 1;
    printf("-- LISTA --\nA) ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", listaA);
        listaA += 2;
    }
    printf(" - resposta: %d\n", listaA);

    //lista B)
    int listaB = 2;
    printf("\nB) ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", listaB);
        listaB *= 2;
    }
    printf(" - resposta: %d\n", listaB);

    //lista C)
    printf("\nC) ");
    for(i = 0; i < 7; i++)
    {
        printf("%d ", i * i);
    }
    printf(" - resposta: %d\n", i * i);

    //lista D)
    printf("\nD) ");
    for(i = 2; i < 8; i+= 2)
    {
        printf("%d ", i * i);
    }
    printf(" - resposta: %d\n", i * i);

    //lista E)
    int num1 = 1, num2 = 1, num_next;
    printf("\nE) ");
    printf("%d %d ", num1, num2);
    for (i = 3; i <= 6; i++)
    {
        num_next = num1 + num2; 
        printf("%d ", num_next);
        num1 = num2;
        num2 = num_next;
    }
    printf(" - resposta %d\n", num_next + num2);

    //listaF
    int f = 2;
    printf("\nF) ");
    for (i = 0; i < 7; i++) {
        printf("%d ", f);
        if (i == 0) {
            f += 8; 
        } else if (i % 2 == 0) {
            f += 4; 
        } else {
            f += 1; 
        }
    }
    printf(" - resposta : %d\n", f + 1);



    return 0;
}

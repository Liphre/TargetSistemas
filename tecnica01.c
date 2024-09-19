/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;*/

#include <stdio.h>

int pertenceFibonacci(int numero);
void linha();

int main(void)
{
    int numero, resultado;
    char resposta;

    
    linha();
    puts("VERIFICADOR DE NUMERO DE FIBONACCI");
    linha();

    do {
        printf("Insira o numero que deseja verificar se faz parte da sequencia de Fibonacci: ");
        scanf("%d", &numero);

        resultado = pertenceFibonacci(numero);
        if (resultado == 1)
            printf("O numero %d FAZ parte da sequencia de Fibonacci.\n", numero);
        else
            printf("O numero %d NAO FAZ parte da sequencia de Fibonacci.\n", numero);

        linha();

        puts("Deseja verificar outro numero ? (digite 'S' para SIM ou qualquer outra tecla para sair.)");
        scanf(" %c", &resposta);
        linha();
        linha();

    } while (resposta == 's' || resposta == 'S');


    return 0;
};

void linha()
{
    puts("**********************************");
};

int pertenceFibonacci(int numero)
{
    int a = 0, b = 1, numFibonacci = 0;

    if (numero == a || numero == b)
        return 1;

    while (numFibonacci < numero)
    {
        numFibonacci = a + b;
        a = b;
        b = numFibonacci;
    };    
    
    return numFibonacci == numero;
};

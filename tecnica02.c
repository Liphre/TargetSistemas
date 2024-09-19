/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;*/

#include <stdio.h>
#include <string.h>
#define P 100

void linha();

int main(void) 
{
    char resposta, palavra[P];
    int i, contador = 0;

    linha();
    puts("QUANTOS 'A' TEM ?!");
    linha();

    do {
        printf("Digite sua palavra ou frase: ");
        fgets(palavra, sizeof(palavra), stdin);

        for (i = 0; palavra[i] != '\0'; i++)
            if (palavra[i] == 'A' || palavra[i] == 'a')
                contador++;

        printf("Sua string tem %i letra(s) 'A' (maiuscula/minuscula).\n", contador);
        linha();
        linha();

        puts("Deseja verificar outra palavra ou frase ? (digite 'S' para SIM ou qualquer outra tecla para sair.)");
        scanf(" %c", &resposta);
        linha();
        linha();

    } while (resposta == 's' || resposta == 'S');
  
    return 0;
}

void linha()
{
    puts("**********************************");
};
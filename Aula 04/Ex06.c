#include <stdio.h>

/* Exemplo da vari�vel String */

// \n -> Serve para indicar uma nova linha

int main()
{
char nome[20]; // Tamanho da vari�vel
printf("Digite seu nome: ");
gets (nome); // Fun��o para leitura de String (Char)
printf("\n\nSeu nome eh: %s", nome);
return 0;
}

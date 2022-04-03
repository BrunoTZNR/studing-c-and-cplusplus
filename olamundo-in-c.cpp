#include <stdio.h>

int main ( void ) {

    char nome[30];
    
    puts("Qual seu nome?");
    gets(nome);
    
    printf("O nome digitado foi %s!", nome);

    return 0;

}

#include <stdio.h>
#include <locale.h>

int main ( void ) {

    setlocale(LC_ALL, "Portuguese");

    puts("Olá mundo!");

    return 0;

}
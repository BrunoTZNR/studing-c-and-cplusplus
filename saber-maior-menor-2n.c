#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL,"Portuguese");

    float n[2];
    int i = 0;

    for ( i = 0 ; i <= 1 ; i++) {

        printf("Digite o %i� n�mero: ", i+1);
        scanf("%f", &n[i]);

    }

    if ( n[0] == n[1] ){

        printf("Os n�meros s�o iguais!");

    } else {

		n[0]>n[1]? printf("\nO n�mero: %.2f � o maior n�mero dentre os digitados!", n[0]) : printf("\nO n�mero: %.2f � o maior n�mero dentre os digitados!", n[1]);
		n[0]<n[1]? printf("\nO n�mero: %.2f � o menor n�mero dentre os digitados!", n[0]) : printf("\nO n�mero: %.2f � o menor n�mero dentre os digitados!", n[1]);
    }

    return (0);
}

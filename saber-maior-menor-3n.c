#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL,"Portuguese");

    float n[3];
    int i = 0;

    for ( i = 0 ; i <= 2 ; i++) {

        printf("Digite o %i� n�mero: ", i+1);
        scanf("%f", &n[i]);

    }

	if ( n[0] == n[1] || n[1] == n[2] ) {
		
		if ( n[0] == n[1] ) {
			
			puts("Os n�meros 1 e 2 s�o iguais!");
			
		} else if ( n[0] == n[2] ) {
			
			puts("Os n�meros 1 e 3 s�o iguais!");
			
		} else if ( n[1] == n[2] ) {
			
			puts("Os n�meros 2 e 3 s�o iguais!");
			
		} else {
			
			puts("Os tr�s n�meros s�o iguais!");
			
		}
		
	}
	
	if ( n[0] > n[1] && n[0] > n[2] ) {
			
			
			
	}

    return (0);
}

#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero, i = 0, tabuada;
	
	cout << "Digite um número de 1 a 10: "; cin >> numero;
	
	if ( numero < 1 || numero > 10 ) {
		
		if ( numero < 1 ) {
			
			cout << "O número digitado é menor que 1. Digite um novo valor!" << endl;
			exit(0);	
			
		} else {
			
			cout << "O número digitado é maior que 10. Digite um novo valor!" << endl;
			exit(0);	
			
		}
		
	} else {
		
		while ( i < 10 ) {
			
			++i;
			tabuada = numero * i;
			
			cout << "10 x " << numero << " = " << tabuada << endl;
			
		}
		
	}
	
	system("pause");
	return 0;
}

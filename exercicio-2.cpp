#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float n[2];
	int i;
	
	for( i = 0 ; i <= 1 ; i++ ) {
		
		cout << "Digite o " << i+1 << "� n�mero: ";
		cin >> n[i];
		
	}
	
	if ( n[0] > n[1] ) {
		
		cout << "O n�mero digitado: '" << n[0] << "' � o maior dentre os n�meros digitados!" << endl;
		
	} else {
		
		cout << "O n�mero digitado: '" << n[1] << "' � o maior dentre os n�meros digitados!" << endl;
		
	}
	
	return 0;
}

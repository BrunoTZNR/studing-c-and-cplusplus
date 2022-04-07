#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int numbers[4] = {0,1,2,3};
	
	cout << "Tamanho do array " << sizeof(numbers)/4 << endl;
	
	for( int i=0 ; i<sizeof(numbers)/4 ; i++ ){
		
		cout << numbers[i] << endl;
		
	}
	
	char nome[6]="Bruno";
	
	cout << "Tamanho do array " << sizeof(nome) << endl;
	
	for( int i=0 ; i<sizeof(nome)-1 ; i++ ){
		
		cout << nome[i] << endl;
		
	}
	
	system("pause");
	return 0;
}

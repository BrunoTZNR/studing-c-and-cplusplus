#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	
	cout << "Qual o n�mero? ";
	cin >> num;
	
	if ( num > 0 ) {
		
		cout << "O n�mero entrado � maior que zero!" << endl;
		
	} else {
		
		if ( num < 0 ) {
			
			cout << "O n�mero entrado � menor que zero!" << endl;
			
		} else {
			
			cout << "O n�mero � igual a zero!" << endl;
			
		}
		
	}
	
	return 0;
}

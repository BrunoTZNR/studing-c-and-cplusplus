#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if ( idade >= 16 ) {
		
		cout << "Voc� j� pode votar!" << endl;
		
	} else {
		
		cout << "Voc� ainda n�o pode votar!" << endl;
		
	}
	
	return 0;
}

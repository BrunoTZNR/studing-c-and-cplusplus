#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if ( idade >= 18 ) {
		
		cout << "Voc� j� pode dirigir (se tiver carteira pelo amor!!)!" << endl;
		
	} else {
		
		cout << "Voc� n�o pode dirigir ainda!" << endl;
		
	}
	
	return 0;
}

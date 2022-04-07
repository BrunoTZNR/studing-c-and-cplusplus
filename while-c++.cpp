#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num=0;
	
	while ( num != 4 ) {
		
		cout << "|    MENU    |" << endl;
		cout << "1. Pizza" << endl;
		cout << "2. Carne" << endl;
		cout << "3. Refrigerante" << endl;
		cout << "4. Encerrar pedido" << endl;
		
		cout << "Digite uma opção: "; cin >> num;
		
	}
	
	system("pause");
	return 0;
}

#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main () {
	
	int num;
	
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Qual núemro deseja saber em inglês?(1 a 10) "; cin >> num;
	
	cout << endl;
	
	if ( num<1 || num>10 ) {
		
		cout << "Digite um valor entre 1 a 10!" << endl;
		
	} else {
		
		switch ( num ) {
			case 1: cout << "one" << endl; break;
			
			case 2: cout << "Two." << endl; break;
			
			case 3: cout << "Three." << endl; break;
			
			case 4: cout << "Four." << endl; break;
			
			case 5: cout << "Five." << endl; break;
			
			case 6: cout << "Six." << endl; break;
			
			case 7: cout << "Seven." << endl; break;
			
			case 8: cout << "Eight." << endl; break;
			
			case 9: cout << "Nine." << endl; break;
			
			case 10: cout << "Ten." << endl; break;
			
			default: cout << "I don't know." << endl; break;
		}
		
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}

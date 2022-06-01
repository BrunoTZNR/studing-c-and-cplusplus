#include <iostream>
#include <locale.h>

using namespace std;

float segReta[3];

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for( i = 0 ; i <= 2 ; i++ ) {
		
		cout << "Digite o " << i+1 << "� segmento da reta: ";
		cin >> segReta[i];
		
	}
	
	if ( (segReta[0] + segReta[1]) > segReta[2] && (segReta[0] + segReta[2]) > segReta[1] && (segReta[1] + segReta[2]) > segReta[0] ) {
		
		if ( segReta[0] == segReta[1] && segReta[1] == segReta[2] ) {
			
			cout << "O tri�ngulo formado � chamado de equil�tero." << endl;
			
		} else if ( segReta[0]==segReta[1] || segReta[0]==segReta[2] || segReta[1]==segReta[2] ){
			
			cout << "O tri�ngulo formado � chamado de is�sceles." << endl;
			
		} else {
			
			cout << "O tri�ngulo formado � chamado de escaleno." << endl;
			
		}
		
	} else {
		
		cout << "Os segmentos de retas digitados n�o podem formar um tri�ngulo!" << endl;
		
	}
	
	return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float segReta[3];
	int i;
	
	for( i = 0 ; i <= 2 ; i++ ) {
		
		cout << "Digite o " << i+1 << "� segmento da reta: ";
		cin >> segReta[i];
		
	}
	
	if ( (segReta[0]+segReta[1])>segReta[2] && (segReta[0]+segReta[2])>segReta[1] && (segReta[1]+segReta[2])>segReta[0] ) {
		
		cout << "Os segmentos de retas digitados podem formar um tri�ngulo!" << endl;
		
	} else {
		
		cout << "Os segmentos de retas digitados n�o podem formar um tri�ngulo!" << endl;
		
	}
	
	return 0;
}

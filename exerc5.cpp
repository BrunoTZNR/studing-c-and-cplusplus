#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for (int j=0 ; j<=1 ; j++){
		/*o proprio for j� ir� fornecer 0 e 1, basta adicionar +1 na condicional do switch.
		Ele ir� dar os valores 1 e 2.*/
		switch (j+1){
		case 1:
			cout<<"O n�mero 1 � impar."<<endl;
		break;
		case 2:
			cout<<"O n�mero 2 � par."<<endl;
		break;
		default:
			cout<<"N�mero inv�lido!"<<endl;
	}
	}
	
	system("pause");
	return 0;
}

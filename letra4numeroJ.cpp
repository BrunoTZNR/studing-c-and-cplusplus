#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

// ler A e B, subtrair A e B e elevar o resultado ao quadrado e amarzenar o resultado em uma variavel;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a, b, r;
	
	cout<<"Digite um n�mero inteiro...: ";cin>>a;
	cout<<"Digite outro n�mero inteiro: ";cin>>b;
	
	r = pow((a-b),2);
	
	cout<<"("<<a<<" - "<<b<<")^2 = "<<r<<endl;
	
	system("pause");
	return 0;
}

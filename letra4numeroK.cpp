#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

// solicitar cota��o do dolar, e quantidade de dolares que o usuario possui, e converter em real
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float usd, usdUser, convert;
	
	cout<<"Qual a cota��o do dolar para real: ";cin>>usd;
	cout<<"Quantos dolares voc� possui......? ";cin>>usdUser;
	
	convert = usd * usdUser;
	
	cout<<"Voc� possui R$"<<convert<<" convertidos em reais."<<endl;
	
	system("pause");
	return 0;
}

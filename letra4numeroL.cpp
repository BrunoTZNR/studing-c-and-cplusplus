#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

// a e b, passar valor de a para b e b para a;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float realUser, real, convert;
	
	cout<<"Qual a cota��o do real para dolar: ";cin>>real;
	cout<<"Quantos reais voc� possui........? ";cin>>realUser;
	
	convert = real * realUser;
	
	cout<<"Voc� possui US$"<<convert<<" convertidos em dolares."<<endl;
	
	system("pause");
	return 0;
}

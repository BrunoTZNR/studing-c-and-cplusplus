#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float notas[4]={}, media;
	
	for (int i=0 ; i<=3 ; i++) {
		cout<<"Digite a "<<i+1<<"� nota: "; cin>>notas[i];
	}
	
	cout<<endl;
	
	media = (notas[0]+notas[1]+notas[2]+notas[3])/(sizeof(notas)/4);
	
	if (media<0) {
		cout<<"Voc� � burrou ou qu�?"<<endl<<"Reprovado e tente novamente!"<<endl;
	} else if (media>=0 && media <3) {
		cout<<"Reprovado!"<<endl;
	} else if (media>=3 && media<6) {
		cout<<"Recupera��o!"<<endl;
	} else {
		cout<<"Aprovado!"<<endl;
	}
	
	system("pause");
	return 0;
}

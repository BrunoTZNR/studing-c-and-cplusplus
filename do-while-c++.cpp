#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num=0;
	
	do{
		
		cout << num << endl;
		num++;
		
	} while ( num < 10 );
	
	system("pause");
	return 0;
}

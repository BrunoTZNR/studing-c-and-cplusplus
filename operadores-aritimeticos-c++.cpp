#include <iostream>

using namespace std;

int main() {
	
	int a, b;
	
	a = 5;
	b = 2;
	
	int adc, sub, mult;
	float div, resto;
	
	adc = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	resto = a % b;
	
	cout << "Adicao " << adc << endl;
	cout << "Subtracao " << sub << endl;
	cout << "multiplicacao " << mult << endl;
	cout << "divisao " << div << endl;
	cout << "resto (modulo) " << resto << endl;
	
	return 0;
}

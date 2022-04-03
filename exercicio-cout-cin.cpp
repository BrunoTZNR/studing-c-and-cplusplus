#include <iostream>
using namespace std;

int main() {
	
	float a, b, c;
	
	cout << "Entre com o valor de a: ";
	cin >> a;
	
	cout << "Entre com o valor de b: ";
	cin >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << "O valor de A: " << a << endl;
	cout << "O valor de B: " << b << endl;
	
	return 0;
}

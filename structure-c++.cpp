#include <iostream>
#include <locale.h>
#include <conio.h>
#include <string>

using namespace std;

/* OBJETO CLIENTES */
struct clientes {
	
	int clienteId;
	string nome;
	int idade;
	float salario;
	
};

/* OBJETO LOJAS */
struct lojas {
	
	int lojaId;
	string tipo;
	
};

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	/* variaveis clientes */
	clientes meuCliente[3] = {};
	
	meuCliente[0] = {1, "Bruno", 30, 1000};
	meuCliente[1] = {2, "Bianca", 29, 1500};
	
	/* variaveis lojas */
	lojas loja[3] = {};
	
	loja[0] = {1, "Atacadista"};
	loja[1] = {2, "Varejista"};
	
	/* bloco clientes */
	cout<<endl;
	cout << "/*******CLIENTES*******/" << endl;
	cout<<endl;
	
	cout << "Entre com o Id do cliente: "; cin >> meuCliente[2].clienteId;
	cout << "Entre com o nome do cliente: "; cin >> meuCliente[2].nome;
	cout << "Entre com a idade do cliente: "; cin >> meuCliente[2].idade;
	cout << "Entre com o salário do cliente: "; cin >> meuCliente[2].salario;
		
	cout<<endl;
	
	for ( int j = 0 ; j<=2 ; j++ ) {
		
		cout << "Id do cliente: " << meuCliente[j].clienteId << endl;
		cout << "Nome do cliente : " << meuCliente[j].nome << endl;
		cout << "Idade do cliente: " << meuCliente[j].idade << endl;
		cout << "Salário do Cliente: " << meuCliente[j].salario << endl;
		cout<<endl;
		
	}

	/* bloco lojas */
	cout<<endl;
	cout << "/*******LOJAS*******/" << endl;
	cout<<endl;
	
	cout << "Digite o Id da loja: "; cin >> loja[2].lojaId;
	cout << "Digite o tipo de loja: "; cin >> loja[2].tipo;
	
	cout<<endl;
	
	for ( int i = 0 ; i<=2 ; i++ ) {
		
		cout << "Id da loja: " << loja[i].lojaId << endl;
		cout << "Tipo da loja: " << loja[i].tipo << endl;
		cout<<endl;
		
	}

	cout<<endl;
	system("pause");
	return 0;
}

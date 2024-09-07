//5. Desenvolva um algoritmo que leia o código de uma peça X, o número de peças X, o valor unitário de cada peça X, o código de uma peça Y, o número de peças Y, o valor unitário de cada peça Y e calcula e mostra o valor a ser pago.


#include <iostream>
using namespace std;

int main(){
	int codigoX, unidadesX;
	int codigoY, unidadesY;
	double valorX, valorY, calc;

	cout << "Digite o código da peça X:" << endl;
	cin >> codigoX;

	cout << "Digite quantas unidades da peça X:" << endl;
	cin >> unidadesX;

	cout << "Digite o valor de cada peça X:" << endl;
	cin >> valorX;

	cout << "Digite o código da peça Y:" << endl;
	cin >> codigoY;

	cout << "Digite quantas unidades da peça Y:" << endl;
	cin >> unidadesY;

	cout << "Digite o valor de cada peça Y:" << endl;
	cin >> valorY;

	calc = (unidadesX * valorX) + (unidadesY * valorY);

	cout << "O valor a ser pago será de: " << calc << " reais." << endl;
}

	
    

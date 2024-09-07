//Faça um algoritmo para ler a base e altura de um triângulo. 
//Em seguida, escreva a área do mesmo. Obs.: Área = (Base * Altura) / 2.

#include <iostream>
using namespace std;

int main (){
	double base, altura, calc;

	cout << "Digite a base do triângulo: " << endl;
	cin >> base;

	cout << "Digite a altura do triângulo: " << endl;
	cin >> altura;

	calc = (base * altura) / 2;

	cout << "A área deste triângulo é de: " << calc << endl;
}

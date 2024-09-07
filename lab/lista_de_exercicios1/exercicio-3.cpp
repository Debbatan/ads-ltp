//3. Escreva um algoritmo que leia o nome de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o nome e o salário do funcionário.

#include <iostream>
using namespace std;

int main (){
	int horasTrabalhadas, salarioHora, calc;
	string nome;

	cout << "Digite o nome do funcionário:" << endl;
	cin >> nome;

	cout << "Digite o número de horas trabalhadas:" << endl;
	cin >> horasTrabalhadas;

	cout << "Digite quanto é recebido por hora:" << endl;
	cin >> salarioHora;

	calc = horasTrabalhadas * salarioHora;

	cout << nome << " receberá " << calc <<
		" reais este mês." << endl;
}

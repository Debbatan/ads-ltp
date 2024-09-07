/*8. Faça um algoritmo que leia a idade de uma pessoa em anos, calcule e escreva
quantos dias ele viveu, considerar o ano com 365,25 dias.*/

#include <iostream>
using namespace std;

int main(){
	const float dias_por_ano = 365.25;
	int idade;
	float calc;

	cout << "Digite sua idade em anos:" << endl;
	cin >> idade;

	calc = dias_por_ano * idade;

	cout << "Você viveu " << calc << " dias." << endl;
}

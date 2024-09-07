/*7. Crie um algoritmo que receba do usuário o valor de uma determinada compra e
a quantidade de parcelas em que se quer dividir este valor. O algoritmo deve
calcular o valor de cada parcela e escrever o valor da compra e valor de cada
parcela. Considere que não será acrescido nenhum juro no valor total.*/

#include <iostream>
using namespace std;

int main (){
	float vCompra, parcelas, calc;

	cout << "Digite o valor da compra:" << endl;
	cin >> vCompra;

	cout << "Digite quantas foram as parcelas:" << endl;
	cin >> parcelas;

	calc = vCompra / parcelas;

	cout << "O valor da compra foi de: " << vCompra << " reais." << endl;
	cout << "O valor entre " << parcelas << " parcelas será de: " << calc << " reais." << endl;;
}

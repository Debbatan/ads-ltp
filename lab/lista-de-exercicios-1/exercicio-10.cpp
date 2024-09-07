/*10. Verônica distribui sua renda mensal da seguinte forma: 10% saúde, 25% educação, 30% alimentação, 
10% vestuário, 5% lazer, 20% outros. Faça um algoritmo que leia a renda mensal líquida de Verônica, calcule 
e escreva o valor aplicado em cada item acima citado.*/

#include <iostream>
using namespace std;

int main(){
	double rendaMensal;
	double calcS, calcE, calcA, calcV, calcL, calOu;

	cout << "Digite sua renda mensal:" << endl;
	cin >> rendaMensal;

	cout << "10% saúde = " << rendaMensal * 0.10 << " reais." << endl;
	cout << "25% educação = " << rendaMensal * 0.25 << " reais." << endl;
	cout << "30% alimentação = " << rendaMensal * 0.30 << " reais." << endl;
	cout << "10% vestuário = " << rendaMensal * 0.10 << " reais." << endl;
	cout << "5% lazer = " << rendaMensal * 0.5 << " reais." << endl;
	cout << "20% outros = " << rendaMensal * 0.20 << " reais." << endl;
	}
	

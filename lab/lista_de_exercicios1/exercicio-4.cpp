//4. Faça um algoritmo que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu salário no fim do mês.

#include <iostream>
using namespace std;

int main(){
	double salarioFixo, calc;
	int totalVendas;
	string nome;

	cout << "Digite o nome do vendedor:" << endl;
	cin >> nome;

	cout << "Digite o salário fixo do vendedor:" << endl;
	cin >> salarioFixo;

	cout << "Digite o total de vendas feitas no mês (em dinheiro):" << endl;
	cin >> totalVendas;

	calc = salarioFixo + (totalVendas * 0.15);

	cout << "Com acréscimo de comissão, o vendedor " << nome << " receberá " << 
		calc << " reais este mês." << endl;
}




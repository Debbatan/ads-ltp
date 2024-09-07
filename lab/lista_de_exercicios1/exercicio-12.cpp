	/*12. Dado as seguintes informações de um funcionário: Nome, idade, cargo e o seu
	salário bruto. Considere: a) O salário bruto teve um reajuste de 38%. Faça um
	algoritmo para escrever: Nome, idade e cargo;
	Salário bruto;
	Salário líquido.
	b) O funcionário receberá uma gratificação de 20% do salário bruto;
	c) O salário total é descontado em 15%.*/

	#include <iostream>
	using namespace std;

	int main(){
		string nome;
		string cargo;
		int idade;
		double salarioBruto;
		double salarioBrutoReajuste, gratificacao, desconto, salarioLiquido;

		cout << "Digite seu nome: " << endl;
		cin >> nome;

		cout << "Digite seu cargo: " << endl;
		cin >> cargo;

		cout << "Digite sua idade: " << endl;
		cin >> idade;

		cout << "Digite seu salário bruto: " << endl;
		cin >> salarioBruto;

		salarioBrutoReajuste = salarioBruto * 1.38;
		gratificacao = salarioBrutoReajuste * 0.20;
		desconto = salarioBrutoReajuste * 0.15;
		salarioLiquido = salarioBrutoReajuste - desconto + gratificacao;

		cout << "Nome: " << nome << endl;
		cout << "Cargo: " << cargo << endl;
		cout << "Idade: " << idade << endl;
		cout << "Sálario bruto: " << salarioBrutoReajuste << endl;
		cout << "Sálario liquido: " << salarioLiquido << endl;
	}



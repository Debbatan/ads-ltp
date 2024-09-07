/* 6. Faça um algoritmo para determinar o consumo médio de um automóvel sendo
fornecidos a distância total percorrida pelo automóvel e o total de combustível
gasto*/

#include <iostream>
using namespace std;

int main(){
	float distanciaPercorrida, totalCombustivel, consumo;

	cout << "Digite a distância percorrida:" << endl;
	cin >> distanciaPercorrida;

	cout << "Digite o total de combustivel gasto:" << endl;
	cin >> totalCombustivel;

	consumo = totalCombustivel / distanciaPercorrida;

	cout << "O gasto médio do automóvel é de:" << consumo << endl;
}	



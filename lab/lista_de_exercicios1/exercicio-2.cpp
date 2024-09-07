//2. Leia as duas notas de um aluno. A seguir, calcule a média do aluno, sabendo que a primeira nota tem peso 3 e a segunda nota tem peso 7.

#include <iostream>
using namespace std;

int main(){
	float n1, n2, media;

	cout << "Digite a primeira nota:" << endl;
	cin >> n1;
	
	cout << "Digite a segunda nota:" << endl;
	cin >> n2;

	media = (n1 * 3 + n2 * 7) / 10;

	cout << "Sua medía, com o cálculo de pesos, foi de:" << media << endl;
}

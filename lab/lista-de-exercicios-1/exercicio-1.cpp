//1. Leia as duas notas de um aluno. A seguir, calcule a média aritmética do aluno.

#include <iostream>
using namespace std;

int main(){
	float n1, n2, media;

	cout << "Digite a primeira nota:" << endl;
	cin >> n1;

	cout << "Digite a segunda nota:" << endl;
	cin >> n2;

	media = (n1 + n2) / 2;

	cout << "Sua média foi de: " << media << endl;
}

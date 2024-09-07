/*9. Uma instituição de ensino realizou uma pesquisa sobre os eleitores de um
município que participaram da última eleição. Faça um algoritmo que leia o total de
votos brancos, nulos e válidos. Calcule e escreva o percentual que cada um
representa em relação ao total de eleitores.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int brancos, nulos, validos, total;
	double percentualBrancos, percentualNulos, percentualValidos;

	cout << "Digite a quantidade de votos brancos:" << endl;
	cin >> brancos;

	cout << "Digite a quantidade de votos nulos:" << endl;
	cin >> nulos;

	cout << "Digite a quantidade de votos validos:" << endl;
	cin >> validos;

	total = brancos + nulos + validos;
	percentualBrancos = (static_cast<double>(brancos) / total) * 100;
	percentualNulos = (static_cast<double>(nulos) / total) * 100;
	percentualValidos = (static_cast<double>(validos) / total) * 100;

	cout << fixed << setprecision(2);

	cout << "Os votos brancos representam " << percentualBrancos << " porcento dos eleitores." << endl;
	cout << "Os votos nulos representam " << percentualNulos << " porcento dos eleitores." << endl;
	cout << "Os votos validos representam " << percentualValidos << " porcento dos eleitores." << endl;
}
	 

	

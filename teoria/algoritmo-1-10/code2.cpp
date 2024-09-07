/*2. Faça um algoritmo, em portugol, que lê as dimensões de um retângulo (base e
altura), calcula e escreve a área do retângulo.*/

#include <iostream>
using namespace std;

int main() {
    double base, altura, area;

    cout << "Informe a base: ";
    cin >> base;

    cout << "Informe a altura: ";
    cin >> altura;

    area = base * altura;

    cout << "A área deste triangulo é de valor " << area << ".";

    return 0;
}

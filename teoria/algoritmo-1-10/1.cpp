/*1. Faça um algoritmo, em portugol, que recebe como entradas o salário de um
funcionário e um percentual de aumento. Aplique o percentual sobre o salário e
mostre, como saída, o novo salário.*/

#include <iostream>
using namespace std;

int main() {
    double salario, percentual, aumento, novo_salario;

    cout << "Informe o salário: ";
    cin >> salario;

    cout << "Informe o percentual de aumento: ";
    cin >> percentual;

    aumento = salario * (percentual / 100);
    novo_salario = salario + aumento;

    cout << "O salário, com acréscimo de aumento, será de: " << novo_salario << " reais.";

    return 0;
}

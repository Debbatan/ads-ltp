/*3. Faça um algoritmo, em portugol, que leia a idade de uma pessoa expressa em
anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias.
Considerar ano com 365 dias e mês com 30 dias.*/

#include <iostream>
using namespace std;

int main() {
    int anos, meses, dias, idade_em_dias;

    cout << "Informe a idade em anos: ";
    cin >> anos;

    cout << "Informe o número de meses que não completam um ano: ";
    cin >> meses;

    cout << "Informe o número de dias que não completam um mês: ";
    cin >> dias;

    idade_em_dias = (anos * 365) + (meses * 30) + dias;

    cout << idade_em_dias << " dias vividos.";

    return 0;
}



/*10. Escreva um algoritmo, em portugol, que lê 3 valores (A, B e C)
representando as medidas dos lados de um triângulo e escrever se formam ou não
um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser
menor que a soma dos outros 2 lados.*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Informe o primeiro valor: ";
    cin >> a;

    cout << "Informe o segundo valor: ";
    cin >> b;

    cout << "Informe o terceiro valor: ";
    cin >> c;

    if(a < b + c && b < a + c && c < a + b)
        cout << "Estes valores formam um triângulo.";
    else
        cout << "Estes valores não formam um triângulo";
        
    return 0;
}

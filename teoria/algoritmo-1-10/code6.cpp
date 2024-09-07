/*6. Escreva um algoritmo, em Portugol, que lê dois valores (considere que não
serão lidos valores iguais) e escreva-os em ordem crescente.*/

#include <iostream>
using namespace std;

int main() {
    double v1, v2;

    cout << "Primeiro valor: ";
    cin >> v1;

    cout << "Segundo valor: ";
    cin >> v2;

    if (v1 < v2)
        cout << v1 << ", " << v2;
    else
        cout << v2 << ", " << v1;
        
    return 0;
}

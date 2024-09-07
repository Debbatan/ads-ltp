/*9. Faça um algoritmo que lê 3 valores (considere que não serão informados
valores iguais) e escrever a soma dos 2 maiores. (???)*/

#include <iostream>
using namespace std;

int main() {
    int v1, v2, v3, v_maior1, v_maior2;

    cout << "Informe o primeiro valor: ";
    cin >> v1;

    cout << "Informe o segundo valor: ";
    cin >> v2;

    cout << "Informe o terceiro valor: ";
    cin >> v3;

    v_maior1 = v1;
    v_maior2 = v2;

    if (v2 > v_maior1) {
        v_maior2 = v_maior1;
        v_maior1 = v2;
    } else if (v2 > v_maior2) {
        v_maior2 = v2;
    }

    if (v3 > v_maior1) {
        v_maior2 = v_maior1;
        v_maior1 = v3;
    } else if (v3 > v_maior2) {
        v_maior2 = v3;
    }

    cout << v_maior1 + v_maior2;

    return 0;
}

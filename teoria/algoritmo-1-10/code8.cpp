/*8. Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima
em estoque e quantidade mínima em estoque de um produto. Calcular e escrever a
quantidade média ((quantidade média = quantidade máxima + quantidade
mínima)/2). Se a quantidade em estoque for maior ou igual a quantidade média
escrever a mensagem 'Não efetuar compra', senão escrever a mensagem 'Efetuar
compra'.*/

#include <iostream>
using namespace std;

int main () {
    int qnt_atual, qnt_maxima, qnt_minima, qnt_media;

    cout << "Informe a quantidade atual em estoque: ";
    cin >> qnt_atual;

    cout << "Informe a quantidade máxima do estoque: ";
    cin >> qnt_maxima;

    cout << "Informe a quantidade mínima do estoque: ";
    cin >> qnt_minima;

    qnt_media = (qnt_maxima + qnt_minima) / 2;

    if (qnt_atual >= qnt_media)
            cout << "Não efetuar compra.";
    else
            cout << "Efetuar compra.";
            
    return 0;
}

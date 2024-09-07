/*5. Escreva um algoritmo, em portugol, que lê o ano atual e o ano de nascimento
de uma pessoa. Escrever uma mensagem que diga se ela poderá ou não votar este
ano (não é necessário considerar o mês em que a pessoa nasceu).*/

#include <iostream>
using namespace std;

int main() {
    int ano_atual, ano_nascimento;

    cout << "Informe o ano atual:  ";
    cin >> ano_atual;

    cout << "Informe o ano de nascimento: ";
    cin >> ano_nascimento;

    if (ano_atual - ano_nascimento > 16)
    cout << "Poderá votar.";
    else
    cout << "Não poderá votar.";
    
    return 0;
}

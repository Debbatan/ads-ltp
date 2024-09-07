/*4. Escreva um algoritmo, em portugol, que armazene o valor 10 em uma variável A
e o valor 20 em uma variável B. A seguir (utilizando apenas atribuições entre
variáveis) troque os seus conteúdos fazendo com que o valor que está em A passe
para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas
variáveis.*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    a = 10;
    b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << ", " << "b = " << b;
    
    return 0;
}

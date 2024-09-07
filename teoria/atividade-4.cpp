//Atividade 4: Faça um programa que leia três números e mostre o maior dentre eles.//

/*
Pseudo-Código
(Forma 1):

inicio

declare v1, v2, v3;

escreva "Digite o primeiro valor:";
leia v1;

escreva "Digite o segundo valor;"
leia v2;

escreva "Digite o terceiro valor;"
leia v3;

se v1 > v2 entao
inicio
    se v1 > v3 entao
    inicio
    escreva "O primeiro valor é o maior.";
    fim
    senão
    inicio
    escreva "O terceiro valor é o maior.";
    fim

senão
inicio
    se v2 > v3 entao
    inicio
    escreva "O segundo valor é o maior.";
    fim
    senão
    inicio
    escreva "O terceiro valor é o maior.";
    fim

fim
*/

//Forma 1:
#include <iostream>
using namespace std;

int main() {
    int v1, v2, v3;

    cout << "Digite o primeiro valor:" << endl;
    cin >> v1;

    cout << "Digite o segundo valor:" << endl;
    cin >> v2;

    cout << "Digite o terceiro valor:" << endl;
    cin >> v3;

    if(v1 > v2) {
        if(v1 > v3) {
        cout << "O primeiro é o maior valor." << endl; }
        else {cout << "O terceiro é o maior valor." << endl;}
        }

    else{
        if(v2 > v3){
        cout << "O segundo é o maior valor." << endl;}
        else{cout << "O terceiro valor é o maior." << endl;}
    }
 }

/*Pseudo-código
(Forma 2):

inicio

declare v1, v2, v3, vMaior;

escreva "Digite o primeiro valor:";
leia v1;

escreva "Digite o segundo valor;"
leia v2;

escreva "Digite o terceiro valor;"
leia v3;

vMaior = v1;

se v2 > vMaior entao
inicio
vMaior = v2;
fim

se v3 > vMaior entao
vMaior = v3;

escreva vMaior;
*/




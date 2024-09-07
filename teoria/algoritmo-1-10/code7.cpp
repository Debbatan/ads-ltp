/*7. A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário
que trabalhar mais de 40 horas receberá hora extra cujo cálculo é o valor da
hora regular com um acréscimo de 50%. Escreva um algoritmo que leia o número de
horas trabalhadas em um mês, o salário por hora e escreva o salário total do
funcionário, que deverá ser acrescido das horas extras, caso tenham sido
trabalhadas (considere que o mês possua 4 semanas exatas).*/

#include <iostream>
using namespace std;

int main() {
    double horas_trabalhadas, salario_hora, horas_extras, valor_extra, salario_total;

    cout << "Informe quantas horas foram trabalhadas no mês: ";
    cin >> horas_trabalhadas;

    cout << "Informe quanto custa o salário por hora: ";
    cin >> salario_hora;

        if (horas_trabalhadas > 160) {
            horas_extras = horas_trabalhadas - 160;
            valor_extra = salario_hora * 1.50 * horas_extras;
            salario_total = (salario_hora * 160) + valor_extra;
            cout << "Seu salário, com acrescimo de horas extras, será de: " << salario_total << " reais.";
        } else {
            cout << "Seu salário será de: " << horas_trabalhadas * salario_hora << " reais.";
        }

        return 0;
}

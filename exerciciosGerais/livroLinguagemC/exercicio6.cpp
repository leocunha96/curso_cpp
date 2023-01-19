#include <iostream>
#include "exercicio6.h"
using namespace std;

/*
Escreva um programa que receba a velocidade
máxima em uma avenida e a velocidade com que um motorista estava dirigindo nela.
Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada
km/h que estiver acima da velocidade permitida (considere apenas números inteiros). Se a
velocidade do motorista estiver dentro do limite, o programa deve informar que não há
multa.
*/

//criar funcao recebeVelocidades
//funcao calcula multa

int main () {
    float velocidadePista;
    float velocidadeCondutor;
    cout << "\nInforme a velocidade da pista: ";
    cin >> velocidadePista;
    cout << "\nInforme a velocidade do condutor: ";
    cin >> velocidadeCondutor;
    calculaMulta (velocidadePista, velocidadeCondutor);

}

void calculaMulta (float velocidadePista, float velocidadeCondutor) {
    float multa;
    multa = 5.00;
    float diferencaVelocidade;
    diferencaVelocidade = velocidadeCondutor - velocidadePista;
    if (velocidadeCondutor <= velocidadePista) {
        cout << "\nO condutor esta dentro do limite de velocidade!\n";
    } else {
        multa *= diferencaVelocidade;
        cout << "\nO condutor esta fora do limite de velocidade!\nO condutor sera multado em um valor de: R$ " << multa << "\n";
    }
}
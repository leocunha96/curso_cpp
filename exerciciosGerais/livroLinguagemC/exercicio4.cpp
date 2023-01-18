#include <iostream>
#include "exercicio4.h"
using namespace std;

/*
    Fazer um programa para ler um número do usuário e determinar se este número é par ou não
par
*/
int main () {
    int numero;
    cout << "Informe um numero para verificar se ele eh par ou impar: ";
    cin >> numero;
    if (verificacao(numero) == true) {
        cout << "\nNumero Par!\n";
        } else {
            cout << "\nNumero Impar!\n";
        }
    
}

bool verificacao (int numero) {
    if (numero % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
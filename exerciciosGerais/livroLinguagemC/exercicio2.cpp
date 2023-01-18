//Escreva um programa em C que apresente a tabuada de uma numero inserido pelo usuario. Numero deve ser <= 10;

#include <iostream>
#include "exercicio2.h"
using namespace std;

int main () {
    int numero;
    
    do {
        cout << "Digite um numero para ver sua tabuada: ";
        cin >> numero;
        if (numero > 10) {
            cout << "Digite um numero <= 10! \n\n";
        }
    } while (numero > 10);
    tabuada (numero);
}

void tabuada (int &numero) {

    for (int i = 0; i <=10; i++) {
        cout << "\n\t" << numero << "x" << i << "= " << numero*i;
    }

}
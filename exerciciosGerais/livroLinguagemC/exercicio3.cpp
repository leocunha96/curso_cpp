/*Desenvolva um programa para calcular e escrever
a área e o perímetro de um quadrado. Dados de
entrada: tamanho do lado (tipo da variável: numérico
inteiro, valor em centímetros). 
*/

#include <iostream>
#include "exercicio3.h"
using namespace std;

int main () {
    int lado;
    cout << "Infome, em centimetros, o lado do quadrado: ";
    cin >> lado;
    cout << "\nO perimetro do quadrado eh: " << perimetro (lado) << "\n";
    cout << "\nA area do quadrado eh: " << area (lado) << "\n";
}

int area (int a) {
    return a * a; 
}

int perimetro (int a) {
    return a * 4;
}
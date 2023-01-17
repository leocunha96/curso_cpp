#include <iostream>
#include "exercicio2Vetores.h"

using namespace std;

//desenvolva um programa que receba o numero de elementos desejados (maximo de 20) armazena estes dados em um array;
//depois mostra na tela qual foi o maior e o menor elemento desse array utilizando loops

int main () {
    int numbers;
    numbers = 0;
    char answer;
    answer = 'n';

    do {
        howMuchNumbers (numbers);
        getNumbers (numbers);
        cout << "\nDeseja rodar novamente?\n" << "Digite S para Sim ou N para Nao\n";
        cin >> answer; 
    } while ((answer == 's') || (answer == 'S'));
    return 0;
}
void howMuchNumbers (int &numbers) {
    cout << "Digite a quantidade de numeros que deseja analisar\n";
    cin >> numbers;
    while (numbers > 20){
    cout << "Digite um numero menor que 20!\n";
    cin >> numbers;
    }
}
void getNumbers (int &numbers) {
    int population [numbers] = {0};
    int major;
    int minor;
    for (int i = 0; i < numbers; i++) {
        cout << "Digite o numero " << i+1 << "\n";
        cin >> population [i];
        minor = population [i];
        major = population [i];
    }
    for (int i = 0; i < numbers; i++) {
        if (population[i] > major) {
            major = population [i];
            } else if (population [i] < minor) {
            minor = population [i];             
            }
        }      
    cout << "O menor numero eh: " << minor << "\n";
    cout << "O maior numero eh: " << major << "\n";
}

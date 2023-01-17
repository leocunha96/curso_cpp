#include <iostream>
#include "exercicio2Vetores.h"

using namespace std;

//desenvolva um programa que receba o numero de elementos desejados (maximo de 20) armazena estes dados em um array;
//depois mostra na tela qual foi o maior e o menor elemento desse array utilizando loops

int main () {
    int numbers;
    numbers = 0;

    howMuchNumbers (numbers);
    getNumbers (numbers);
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
    int populationOld [numbers] = {0};
    int major;
    major = 0;
    int minor;
    //minor = 0;
    for (int i = 0; i < numbers; i++) {
        cout << "Digite o numero " << i+1 << "\n";
        cin >> population [i];
        populationOld [i] = population [i];
        minor = population [i];
        for (int j = 0; j < numbers; j++) {
            if (population[i] == 0) {
                minor = 0;

            }
            if ((population [i] >= major) && (population [i] > populationOld [j-1])) {
               major = population [i];
                
            }
            if ((populationOld [j] < population [i]) && (populationOld [j] <= minor) ) {
                minor = populationOld [j];
            }
        }   

    }
    cout << "O menor numero eh: " << minor << "\n";
    cout << "O maior numero eh: " << major << "\n";

}

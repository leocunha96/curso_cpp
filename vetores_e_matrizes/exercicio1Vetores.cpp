#include <iostream>
#include "exercicio1Vetores.h"
using namespace std;

//fazer um programa que realize a soma de 10 numeros

int main () {
    
    //string name;
    float number [10];
    //getName (name); 
    getNumbers (number);

    return 0;
}

void getNumbers (float (&number)[10] ) {
    float soma; 
    soma = 0;
    cout << "A soma de:\n";
    for (int i = 0; i <= 9; i++) {
        cin >> number [i];
        soma += number [i];
    }
    cout << "\t= " << soma << "\n";
}


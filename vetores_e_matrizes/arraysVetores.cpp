#include <iostream>
#include "arraysVetores.h"

using namespace std;

//crie um programa que receba 5 notas de 1 aluno e devolva a media entre elas

int main () {

    getName (); 
    getNotes ();
    
    return 0;
}

void getName () {
    string name;
    cout << "Digite o nome do aluno: " << "\n";
    cin >> name;
    cout << "Notas de: " << name << "\n";
}

void getNotes () {
    float notes [5];
    float soma;
    float media;
    soma = 0;
        for (int i = 0; i <= 4; i++) {
        cin >> notes [i];
        soma += notes [i];
    }
    media = soma/5;
    cout << "\nA media das notas eh: " << media << "\n";
}

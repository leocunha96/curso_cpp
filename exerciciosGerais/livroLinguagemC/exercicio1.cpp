/*
Escreva um programa que leia o número de alunos
e de alunas de uma sala. Como saída, o programa
deve apresentar o número de alunos e em seguida
o de alunas.
*/

#include <iostream>
#include "exercicio1.h"

using namespace std;

int main () {
   int numeroAlunos;
   int numeroAlunas;
   numeroAlunos = 0;
   numeroAlunas = 0;
   alunos (numeroAlunos);
   alunas (numeroAlunas);
   cout << "\n\n O numero de alunos na sala eh: " << numeroAlunos << "\n";
   cout << "\n\n O numero de alunas na sala eh: " << numeroAlunas<< "\n";
}

void alunos (int &alunos) {
  
    cout << "Digite o numero de alunos da sala: ";
    cin >> alunos;
    return;
}

void alunas (int &alunas) {
   
    cout << "Digite o numero de alunas da sala: ";
    cin >> alunas;
    return;
}


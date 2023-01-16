#include <iostream>

//crie uma variavel de nome numero do tipo inteiro e valor inicial igual a 234; >>>ok

//crie um ponteiro de nome ponteiro capaz de apontar para uma variavel do tipo inteiro; >>>ok

//troque o valor de numero para 1456 usando ponteiro; >>>ok;

//coloque o valor de numero na tela usando ponteiro; >>>ok;

//mostre o endereço da memoria RAM em que estao carregados, alocados as variaveis ponteiro e numero; >>>ok;

//crie um outro ponteiro de nome outroPtr;

//faca outroPtr apontar para a mesma variavel que ptr aponta;

//usando ponteiro some 200 ao valor contido em numero;

//usando outroPtr coloque na tela o valor de numero;

using namespace std;

int main () {
    int numero;
    numero = 234;
    int *ponteiro = &numero;
    *ponteiro = 1456;

    int *outroPtr = ponteiro;

    cout << "\nO valor de numero eh: " << *ponteiro << "\n";
    cout << "\nO endereco da memoria RAM em que ponteiro esta alocado eh: " << &ponteiro << "\n";
    cout << "\nO endereco da memoria RAM em que numero esta alocado eh: " << &numero << "\n";
    cout << "\nO endereco em que ponteiro aponta eh: " << ponteiro<< "\n";
    *ponteiro = numero + 200;

    cout << "\nO valor de numero, usando outroPtr, eh: " << *outroPtr << "\n";

    return 0;


}

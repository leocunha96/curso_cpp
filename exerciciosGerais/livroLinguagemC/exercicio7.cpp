#include <iostream>
#include "exercicio7.h"
using namespace std;

/*
Suponha que você está programando um
módulo contador de cédulas para caixas eletrônicos. Escreva um programa que informa com
quantas cédulas de Real podemos representar um dado valor. Exemplo de resposta: R$ 218
= 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1. Informe
quantas unidades existe no caixa e informe ao usuario todas as possibilidades de notas para o usuario escolher. 
Pergunte se deseja uma nova operação. Faça isso ate que não tenha cedulas disponieis no caixa e informe no final
caixa fora de operação.
*/

//criar variaveus para os valores de cedulas.
//perguntar o valor


int main () {
    int notas [7] = {0};
    /*
        Posicao 0 -> notas200
        Posicao 1 -> notas100
        Posicao 2 -> notas50
        Posicao 3 -> notas20
        Posicao 4 -> notas10
        Posicao 5 -> notas5
        Posicao 6 -> notas2   
    */
    do {
        notasDisponiveis (notas);
        opcaoSaque (notas);
    


    } while (caixaComDinheiro(notas) == false);
    cout << "\nCaixa fora de operacao!\n"; 
}

void notasDisponiveis (int (&notas)[7]) {
       for (int i = 0; i < 7; i++) {
        switch (i) {
            case 0:
                cout << "\nInforme o numero de cedulas de R$200 disponiveis no caixa: ";
                cin >> notas[i];
                break;
            case 1:
                cout << "\nInforme o numero de cedulas de R$100 disponiveis no caixa: ";
                cin >> notas[i];
                break;
            case 2:
                cout << "\nInforme o numero de cedulas de R$50 disponiveis no caixa: ";
                cin >> notas[i]; 
                break;  
            case 3:
                cout << "\nInforme o numero de cedulas de R$20 disponiveis no caixa: ";
                cin >> notas[i];
                break;
            case 4:
                cout << "\nInforme o numero de cedulas de R$10 disponiveis no caixa: ";
                cin >> notas[i];  
                break;
            case 5:
                cout << "\nInforme o numero de cedulas de R$5 disponiveis no caixa: ";
                cin >> notas[i]; 
                break;              
            case 6:
                cout << "\nInforme o numero de cedulas de R$2 disponiveis no caixa: ";
                cin >> notas[i];
                break;
            default:
                break;
        }
   }
}

bool caixaComDinheiro (int (&notas)[7]){
    int compare;
    int zero;
    zero = 0;
    compare = 0;
    for (int i =0; i < 7; i++) {
        if (notas [i] == zero) {
        compare++;
        }
    }
    if (compare == 7) {
        return true;
    }
    return false;
   
}   

void opcaoSaque (int (&notas)[7]) {
    int saque;
    saque = 0;
    verificaSaque (saque);
    saqueNotasDois (saque, notas);
    saqueNotasDez (saque, notas);
    saqueNotasVinte (saque, notas);
    saqueNotasCinquenta (saque, notas);
    saqueNotasCem (saque, notas);
    saqueNotasDuzentos (saque, notas);
    // notas de 2!


    }

void verificaSaque (int &saque) {
    char repetir;
    while (saque < 2) {
        cout << "\nQuanto deseja sacar hoje?\n";
        cin >> saque;
        if (saque <= 1) {
            cout << "Opcao invalida!\nDeseja digitar novamente?\n(Digite S para SIM e N para N)\n";
            cin >> repetir;
        }
    }
}

int saqueNotasDois (int saque, int (&notas) [7]) {
    int parametro;
    if ((saque % 2 == 0)) {
        parametro = (notas [6]);
        if ((parametro < 1) || ((parametro*2) < saque)) {
            cout << "opcao indisponivel no momento\n";
        } else {
            cout << "opcao disponivel no momento\n"; // ajustar aqui depois para descontar da maquina caso selecionado
        }
    }
}

void saqueNotasDez (int saque, int (&notas) [7]) {
    int parametro;
    if ((saque % 2 == 0)) {
        parametro = (notas [4]);
        if (((parametro*10) < saque)) {
            cout << "opcao indisponivel no momento\n";
        } else {
            cout << "opcao disponivel no momento\n"; // ajustar aqui depois para descontar da maquina caso selecionado
        }
    }
}

void saqueNotasVinte (int saque, int (&notas) [7]) {
    int parametro;
    if ((saque % 2 == 0)) {
        parametro = (notas [3]);
        if (((parametro*20) < saque)) {
            cout << "opcao indisponivel no momento\n";
        } else {
            cout << "opcao disponivel no momento\n"; // ajustar aqui depois para descontar da maquina caso selecionado
        }
    }
}

void saqueNotasCinquenta (int saque, int (&notas) [7]) {
    int parametro;
    if ((saque % 2 == 0)) {
        parametro = (notas [2]);
        if (((parametro*50) < saque)) {
            cout << "opcao indisponivel no momento\n";
        } else {
            cout << "opcao disponivel no momento\n"; // ajustar aqui depois para descontar da maquina caso selecionado
        }
    }
}

void saqueNotasCem (int saque, int (&notas) [7]) {
    int parametro;
    if ((saque % 2 == 0)) {
        parametro = (notas [1]);
        if (((parametro*100) < saque)) {
            cout << "opcao indisponivel no momento\n";
        } else {
            cout << "opcao disponivel no momento\n"; // ajustar aqui depois para descontar da maquina caso selecionado
        }
    }
}

void saqueNotasDuzentos (int saque, int (&notas) [7]) {
    int parametro;
    if ((saque % 2 == 0)) {
        parametro = (notas [0]);
        if (((parametro*20) < saque)) {
            cout << "opcao indisponivel no momento\n";
        } else {
            cout << "opcao disponivel no momento\n"; // ajustar aqui depois para descontar da maquina caso selecionado
        }
    }
}
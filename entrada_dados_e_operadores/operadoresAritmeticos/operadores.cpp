#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    int soma;
    int menos;
    int multiplicacao;
    int divisao;
    int resto;
    char resposta;
    bool comparacao;

    do {
        cout << "Digite o numero correspondente de A: ";
        cin >> a;

        cout << "Digite o numero correspondente de B: ";
        cin >> b;

        soma = a + b;
        menos = a - b;
        multiplicacao = a * b;
        divisao = a / b;
        resto = a % b;
        comparacao = (a == b);
        
        cout << "A + B = " << soma << endl;
        cout << "A - B = " << menos << endl;
        cout << "A * B = " << multiplicacao << endl;
        cout << "A / B = " << divisao << endl;
        cout << "A % B = " << resto << endl;
        cout << "Os numeros sao iguais?" << comparacao << endl;
        
        cout << "Deseja repetir?\nDigite S para SIM ou N para NAO" << endl;
        cin >> resposta;

       

       } while (resposta == 'S' || resposta == 's');

       return 0;
 

}
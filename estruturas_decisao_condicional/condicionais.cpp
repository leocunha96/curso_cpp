#include <iostream>
#include <string>

using namespace std;

int main () {

    bool bSunny;
    bool bCarReady;
    bool bSalaryDeposited;
    bool bAccess;
    char choice;

    string accessPassword = "potato";
    string enteredPassword;

    cout << "Digite a senha de acesso: ";
    cin >> enteredPassword;

    if (enteredPassword == accessPassword) {
        cout << "\nAcesso Permitido!" << "\n";
        cout << "Esta fazendo sol hoje? (Digite S para SIM ou N para NAO)" << "\n";
        cin >> choice;
        if (choice == 'S' || choice == 's') {
            bSunny = true;
        } else {
            bSunny = false;
        }
        cout << "O carro ficou pronto? (Digite S para SIM ou N para NAO)" << "\n";
        cin >> choice;
        if (choice == 'S' || choice == 's') {
            bCarReady = true;
        } else {
            bCarReady = false;
        }
        cout << "O salario foi depositado? (Digite S para SIM ou N para NAO)" << "\n";
        cin >> choice;
        if (choice == 'S' || choice == 's') {
            bSalaryDeposited = true;
        } else {
            bSalaryDeposited = false;
        }
        if (bSunny && bCarReady && bSalaryDeposited) {
            cout << "\nVamos para a praia hoje!" << "\n";
        } else {
            cout << "\nVamos para o cinema hoje!" << "\n";
        }

    } else {
        cout << "\nAcesso Negado!" << "\n";
    }

}
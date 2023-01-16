#include <iostream>
#include <string>
#include "referencias.h"

using namespace std;
// bool bSunny;
// bool bCarReady;
// bool bSalaryDeposited;

int main () {
    bool bSunny;
    bool bCarReady;
    bool bSalaryDeposited;
    
    access();
    questions(bSunny, bCarReady, bSalaryDeposited);  
    decision(bSunny, bCarReady, bSalaryDeposited);

    return 0;
}

void whatBeach () {

    int beach;
    cout << "\nDigite para qual praia vamos:\n1 - Guaratuba\n2 - Caioba\n3 - Praia de Leste\n4 - Pontal do Parana\n5 - Ilha do Mel" << "\n";
    cin >> beach;

        switch (beach) {
            case 1: 
                cout << "\nVamos para Guaratuba!" << "\n";
                break;
            case 2: 
                cout << "\nVamos para Caioba!" << "\n";
                break;
            case 3: 
                cout << "\nVamos para Praia de Leste!" << "\n";
                break;
            case 4: 
                cout << "\nVamos para Pontal do Parana!" << "\n";
                break;
            case 5: 
                cout << "\nVamos para Ilha do Mel!" << "\n";
                break;
            default:
                cout << "\nAinda nao decidimos kkj" << "\n";
                break;
            }
    return;
}

void whatMovie () {
    int cinema;
    cout << "\nDigite qual filme vamos assistir:\n1 - Detona Ralph\n2 - Avatar\n3 - Guardios da Galaxia\n4 - Harry Potter e a camera secreta\n5 - Batman" << "\n";
    cin >> cinema;

    switch (cinema) {
        case 1: 
            cout << "\nVamos ver Detona Ralph!" << "\n";
            break;
        case 2: 
            cout << "\nVamos ver Avatar!" << "\n";
            break;
        case 3: 
            cout << "\nVamos ver Guardios da Galaxia!" << "\n";
            break;
        case 4: 
            cout << "\nVamos ver Harry Potter e a camera secreta!" << "\n";
            break;
        case 5: 
            cout << "\nVamos ver Batman" << "\n";
            break;
        default:
            cout << "\nAinda nao decidimos kkj" << "\n";
            break;
        }
    return;

}

void decision (bool choice1, bool choice2, bool choice3) {

    if (choice1 && choice2 && choice3) {
        cout << "\nVamos para a praia hoje!" << "\n";
        whatBeach();
        return;
        
        } else {
            cout << "\nVamos para o cinema hoje!" << "\n";
            whatMovie();
            return;
        }
}

void questions (bool& isSunny, bool& carReady, bool& salaryDeposited) {

    char choice;

    cout << "Esta fazendo sol hoje? (Digite S para SIM ou N para NAO)" << "\n";
    cin >> choice;
    (choice == 'S' || choice == 's') ? isSunny = true : isSunny = false;
        
    cout << "O carro ficou pronto? (Digite S para SIM ou N para NAO)" << "\n";
    cin >> choice;
    (choice == 'S' || choice == 's') ? carReady = true : carReady = false;  
        
    cout << "O salario foi depositado? (Digite S para SIM ou N para NAO)" << "\n";
    cin >> choice;
    (choice == 'S' || choice == 's') ? salaryDeposited = true : salaryDeposited = false;

    return;    
}

void access () {
    bool bAccess;
        string accessPassword = "potato";
        string enteredPassword;

        cout << "Digite a senha de acesso: ";
        cin >> enteredPassword;
    
        while (enteredPassword != accessPassword)
        {
            cout << "\nAcesso Negado!" << "\n";
            cout << "Digite a senha de acesso: ";
            cin >> enteredPassword;
        }
        cout << "\nAcesso Permitido!" << "\n";
        return;

}

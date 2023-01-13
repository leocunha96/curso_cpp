#include <iostream>

int main() {

bool bAchou;

bAchou = 1;
std :: cout << "Valor bAchou: " << bAchou << std :: endl;
std :: cout << "Tamanho bAchou: " << sizeof(bAchou) << std :: endl;
std :: cout << "Endereco bAchou: " << &bAchou << std :: endl;

bAchou = 0;
std :: cout << "Valor bAchou: " << bAchou << std :: endl;
std :: cout << "Tamanho bAchou: " << sizeof(bAchou) << std :: endl;
std :: cout << "Endereco bAchou: " << &bAchou << std :: endl;

bAchou = true;
std :: cout << "Valor bAchou: " << bAchou << std :: endl;

bAchou = false;
std :: cout << "Valor bAchou: " << bAchou << std :: endl;

bAchou = 8;
std :: cout << "Valor bAchou: " << bAchou << std :: endl;
//qualquer coisa diferente de 0 é true

bAchou = 'batata';
std :: cout << "Valor bAchou: " << bAchou << std :: endl;
}
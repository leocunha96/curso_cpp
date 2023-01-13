#include <iostream>
#include <iomanip> //para aumenta a precisao no truncamento

int main ()
{
    int numero;
    float numero2;
    double numero3 = 45345.904555;

    numero = 45; 
    numero2 = 55.56f;

    std::cout << "Valor numero: " << numero << std::endl;
    std::cout << "Tamanho da variavel numero: " << sizeof(numero) << std::endl;
    std::cout << "Endereco carregado na memoria para a variavel numero: " << &numero << std::endl;

    std::cout << "Valor numero2: " << numero2 << std::endl;
    std::cout << "Tamanho da variavel numero2: " << sizeof(numero2) << std::endl;
    std::cout << "Endereco carregado na memoria para a variavel numero2: " << &numero2 << std::endl;

    std::cout << "Valor numero3: " <<  std::setprecision(12) << numero3 << std::endl; //para aumentar a precisao do double
    std::cout << "Tamanho da variavel numero3: " << sizeof(numero3) << std::endl;
    std::cout << "Endereco carregado na memoria para a variavel numero3: " << &numero3 << std::endl;
}
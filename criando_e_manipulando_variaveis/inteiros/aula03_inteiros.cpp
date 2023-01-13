#include <iostream>

int main ()
{
    int numero;
    numero = 45; 

    std::cout << "Valor numero: " << numero << std::endl;
    std::cout << "Tamanho da variavel numero: " << sizeof(numero) << std::endl;
    std::cout << "Endereco carregado na memoria para a variavel numero: " << &numero << std::endl;

    // Exercicio 1 - criando variaveis

    int numComputadores;
    int serialComputadores; 
    
    numComputadores = 100;
    serialComputadores = 11111;

    std::cout << "$$$$$$$$$$$$$$" << std::endl;
    std::cout << "\tValor de numComputadores: " << numComputadores << std::endl; 
    std::cout << "\tValor de numComputadores: " << serialComputadores << std::endl; 
    std::cout << "$$$$$$$$$$$$$$" << std::endl;
}
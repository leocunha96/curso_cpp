#include <iostream>


int main()
{
    //declaracao de variaveis
    int numVidas = 5;
    int score = 1350;
    std::cout << "******INICIO DO JOGO******" << std::endl;
    std::cout << "Vidas Jogador: " << numVidas << std::endl;
    std::cout << "Score:" << score << std::endl;
    std::cout << "Endereco de memoria que numVidas ocupa na memoria RAM" << &numVidas << "\n";
    std::cout << "Tamanho da variavel numVidas: " << sizeof(numVidas) << " Bytes" << "\n";
    std::cout << "Tamanho da variavel score: " << sizeof(score) << " Bytes" << "\n";
    std::cout << "Endereco de memoria que score ocupa na memoria RAM" << &score << "\n";
    std::cout << "****************" << std::endl;

    std::cout << "******DURANTE O JOGO******" << std::endl;
    score = score + 150; //score += 150;
    numVidas = numVidas -1; //numVidas -= 1;
    std::cout << "Vidas Jogador: " << numVidas << std::endl;
    std::cout << "Score:" << score << std::endl;
    std::cout << "****************" << std::endl;
}
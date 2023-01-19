#include <iostream>
#include "exercicio5.h"
#include <math.h>
using namespace std;

/*
    Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes
valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo
é equilátero, isósceles ou escaleno. 

Só irá existir um triângulo se, somente se, os seus lados obedeceram à seguinte regra:
um de seus lados deve ser maior que o valor absoluto (módulo) da diferença dos outros 
dois lados e menor que a soma dos outros dois lados.

"O triângulo é escaleno quando as medidas dos lados são todas diferentes."
"O triângulo é isósceles quando possui pelo menos dois lados congruentes, ou seja, com a mesma medida."
"O triângulo é equilátero quando possui os três lados com as mesmas medidas"
*/

int main () {
//informa 3 lados
//enviar os 3 lados para funcao de verificacao de possibilidade de triagulo
// >true: eh possivel formar triangulo,   false> nao eh possivel formar triangulo
// if true envia os lados para verificacao do tipo do triangulo
// switch case > onde cada caso retornado como int eh um tipo do triangulo.

    int lado1;
    int lado2;
    int lado3;
    int triangulo;

    recebeLados (lado1, lado2, lado3);
    cout << "Os lados sao: " << lado1 << ", " << lado2 << ", " << lado3 << "\n";
    
    triangulo = confereTriangulo (lado1, lado2, lado3);
    if (triangulo == 1) {
        cout << "\nExiste um triangulo com essas coordenadas!\n";
        if (classificacaoTriangulo (lado1, lado2, lado3) == 1) {
            cout << "\nEste triangulo eh do tipo escaleno!\n\nPossui os tres lados diferentes!\n";
        } else if (classificacaoTriangulo (lado1, lado2, lado3) == 2) {
            cout << "\nEste triangulo eh do tipo equilatero!\n\nPossui os tres lados iguais!\n";
        } else {
            cout << "\nEste triangulo eh do tipo isoceles!\n\nPossui dois lados iguais!\n";
        }
    } else {
        cout << "\nNao xiste um triangulo com essas coordenadas!\n";
    }

    
}

void recebeLados(int &lado1, int &lado2, int &lado3){
    cout << "\nInforme o primeiro lado: ";
    cin >> lado1;
    cout << "\nInforme o segundo lado: ";
    cin >> lado2;
    cout << "\nInforme o terceiro lado: ";
    cin >> lado3;
}

bool confereTriangulo (int lado1, int lado2, int lado3) {
    int modulo;
    modulo = confereModulo (lado1, lado2, lado3);
    if (modulo == 1) {
        return true;
    } else {
        return false;
    }
}

bool confereModulo (int lado1, int lado2, int lado3) {
    int modulo1;
    int modulo2;
    int modulo3;
    modulo1 = abs(lado1 - lado2);
    modulo2 = abs(lado1 - lado3);
    modulo3 = abs(lado2 - lado3); 
    if ((lado1 > modulo3) && (confereSoma1(lado1, lado2, lado3))) {
        return true;
    } else if ((lado2 > modulo2) && (confereSoma2(lado1, lado2, lado3))) {
        return true;
    } else if ((lado3 > modulo1) && (confereSoma3(lado1, lado2, lado3))) {
        return true;
    } else {
        return false;
    }
}

bool confereSoma1 (int lado1, int lado2, int lado3) {
    int somaLados1;
    somaLados1 = lado2 + lado3;
    if (lado1 < somaLados1) {
        return true;
    } else {
        return false;
    }
}

bool confereSoma2 (int lado1, int lado2, int lado3) {
    int somaLados2;
    somaLados2 = lado1 + lado3;
    if (lado2 < somaLados2) {
        return true;
    } else {
        return false;
    }
}

bool confereSoma3 (int lado1, int lado2, int lado3) {
    int somaLados3;
    somaLados3 = lado1 + lado2;
    if (lado3 < somaLados3) {
        return true;
    } else {
        return false;
    }
}

int classificacaoTriangulo (int lado1, int lado2, int lado3) {
    int tipo;
    if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)) {
        return tipo = 1;
    } else if ((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)) {
        return tipo = 2;
    } else {
        return tipo = 3;
    }
}
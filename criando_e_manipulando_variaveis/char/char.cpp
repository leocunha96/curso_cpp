#include <iostream>
//#include <fcntl.h> para Windows para caracteres UNICODE
//#include <io.h> para Windows para caracteres UNICODE

int main() {

char caractere = '3';
char caractere2 = 'a';

std :: cout << "Valor Caractere: " << caractere << std :: endl;
std :: cout << "Tamanho Caractere: " << sizeof(caractere) << std :: endl;
std :: cout << "Endereco Caractere: " << (void *) &caractere << std :: endl;

std :: cout << "Valor Caractere: " << caractere2 << std :: endl;
std :: cout << "Tamanho Caractere: " << sizeof(caractere2) << std :: endl;
std :: cout << "Endereco Caractere: " << (void *) &caractere2 << std :: endl;

/*_setmode(_fileno(stdout), _O_U16TEXT);
std :: wcout << L"\u00AE";

para Windows para caracteres UNICODE
*/


}
#include <iostream>
#include <string>
#include <algorithm>
#include <string>
using namespace std;

bool esPalindromo(unsigned long long num) {
    string original = to_string(num);
    string reverso = original;
    reverse(reverso.begin(), reverso.end());
    return original == reverso;
}

unsigned long long invertirNumero(unsigned long long num) {
    unsigned long long invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

pair<unsigned long long, int> encontrarPalindromo(unsigned long long num) {
    int iteraciones = 0;
    while (!esPalindromo(num)) {
        num += invertirNumero(num);
        iteraciones++;
    }
    return {num, iteraciones};
}

int main() {
    unsigned long long numero = 123; 
    auto resultado = encontrarPalindromo(numero);
    cout << "El palindromo resultante es: " << resultado.first <<::endl;
    cout << "Numero de iteraciones necesarias: " << resultado.second ;
    return 0;
}
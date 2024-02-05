#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    const int limite = 1000000;
    int sumaMax = 0, numPrimoMax = 0;
    vector<int> primos;

    // Generamos una lista de números primos por debajo del límite dado
    for (int i = 2; i < limite; ++i) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }

    // Iteramos sobre los números primos y buscamos la secuencia más larga
    for (int i = 0; i < primos.size(); ++i) {
        int suma = 0;
        for (int j = i; j < primos.size(); ++j) {
            suma += primos[j];
            if (suma > limite) break; // Nos aseguramos de no exceder el límite
            if (esPrimo(suma) && (j - i + 1) > sumaMax) {
                sumaMax = j - i + 1;
                numPrimoMax = suma;
            }
        }
    }

    cout << "El primo por debajo de un millón que puede expresarse como la suma de la mayor cantidad de primos consecutivos es: " << numPrimoMax << endl;

    return 0;
}
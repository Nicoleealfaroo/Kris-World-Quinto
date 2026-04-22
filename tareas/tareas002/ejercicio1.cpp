#include <iostream>
#include <string>
using namespace std;

bool es_palindromo(string palabra) {
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = tolower(palabra[i]);
    }
    int inicio = 0;
    int fin = palabra.length() - 1;
    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            return false;
        }
    }
    return true;
}

int main() {
    string palabra;
    cin >> palabra;
    if (es_palindromo(palabra)) {
        cout << "\"" << palabra << "\" es un palindromo." << endl;
    } else {
        cout << "\"" << palabra << "\" no es un palindromo." << endl;
    }
    return 0;
}
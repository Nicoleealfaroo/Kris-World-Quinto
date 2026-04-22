#include <iostream>
#include <string>
using namespace std;

bool es_valido(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

string tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c) {
        return "Está clasificado como un equilatero";
    } 
    else if (a == b || a == c || b == c) {
        return "Está clasificado como un isosceles";
    } 
    else {
        return "Está clasificado como un escaleno";
    }
}

int calcular_perimetro(int a, int b, int c) {
    return a + b + c;
}

void describir_triangulo(int a, int b, int c) {
    if (!es_valido(a, b, c)) {
        cout << "Nada que ver, triangulo invalido" << endl;
        return;
    }
    string tipo = tipo_triangulo(a, b, c);
    int perimetro = calcular_perimetro(a, b, c);
    cout << "Tipo: " << tipo << endl;
    cout << "Perimetro: " << perimetro << endl;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    describir_triangulo(a, b, c);
    return 0;
}
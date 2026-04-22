#include <iostream>
using namespace std;

const int N = 5;

double calcularPromedio(int arr[], int n);

int main() {
    int notas[N];
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }
    cout << calcularPromedio(notas, N) << '\n';
    return 0;
}

double calcularPromedio(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];         
    }
    return suma / (double)n;    
}
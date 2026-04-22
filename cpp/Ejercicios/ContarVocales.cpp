#include <iostream>
#include <cctype>
using namespace std;

bool esVocal(char c);

int main() {
    string texto;
    getline(cin, texto);

    int cuenta = 0;
    for (int i = 0; i < (int)texto.length(); i++) {
        if (esVocal(texto[i])) {
            cuenta++;
        }
    }
    cout << cuenta << '\n';
    return 0;
}

bool esVocal(char c) {
    c = tolower(c);     
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
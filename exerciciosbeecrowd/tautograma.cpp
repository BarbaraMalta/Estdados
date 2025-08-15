#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string linha;

    while (true) {
        getline(cin, linha);
        if (linha == "*") break;

        char primeiraletra = '\0';
        bool tautograma = true;
        int i = 0;
        int tamanho = linha.size();

        while (i < tamanho) {
            while (i < tamanho && linha[i] == ' ') i++;
                if (i >= tamanho) break;
                char letra = tolower(linha[i]);
                if (primeiraletra == '\0') {
                    primeiraletra = letra;
                } else if (letra != primeiraletra) {
                    tautograma = false;
                    break;
                }
            while (i < tamanho && linha[i] != ' ') i++;
        }
    if (tautograma) {
        cout << 'Y' << endl;
    } else {
        cout << 'N' << endl;
    }
    }
    return 0;
}
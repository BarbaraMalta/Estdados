#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        for (int i = 0; i < N; ++i) {
            int a, b, c, d, e;
            cin >> a >> b >> c >> d >> e;

            int preto = 0;
            char resposta = '*';

            if (a <= 127) {
                preto++;
                resposta = 'A';
            }
            if (b <= 127) {
                preto++;
                resposta = 'B';
            }
            if (c <= 127) {
                preto++;
                resposta = 'C';
            }
            if (d <= 127) {
                preto++;
                resposta = 'D';
            }
            if (e <= 127) { 
                preto++;
                resposta = 'E';
            }

            if (preto == 1) {
                cout << resposta << endl;
            } else {
                cout << "*" << endl;
            }
        }
    }
    return 0;
}
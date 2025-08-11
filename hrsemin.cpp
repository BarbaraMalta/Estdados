#include <iostream>
#include <cmath>
using namespace std;

int main() {
    bool aparece[181] = {false};

    for (int minuto = 0; minuto < 720; minuto++) {
        int ponteiro_minuto = minuto % 60;
        int ponteiro_hora = (minuto / 12) % 60;

        int diferenca = abs(ponteiro_minuto - ponteiro_hora);
        int angulo = diferenca * 6;

        if (angulo > 180) {
            angulo = 360 - angulo;
        }

        aparece[angulo] = true;
    }

    int A;
    while (cin >> A) {
        if (A >= 0 && A <= 180) {
            if (aparece[A]) {
                cout << "Y" << endl;
            } else {
                cout << "N" << endl;
            }
        }
    }

    return 0;
}
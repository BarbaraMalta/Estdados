#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N;
    cin >> N;
    
    cout << "NOTAS:" << endl;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int sobra = (int)N;
    for (int i = 0; i < 6; i++) {
        int qtdnotas = sobra / notas[i];
        cout << qtdnotas << " nota(s) de R$ " << notas[i] << ".00" << endl;
        sobra = sobra % notas[i];
    }
    
    cout << "MOEDAS:" << endl;
    int moedasint = (N - (int)N) * 100 + sobra * 100;
    double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    for (int i = 0; i < 6; i++) {
        int qtdmoedas = moedasint / (int)(moedas[i] * 100);
        cout << qtdmoedas << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << endl;
        moedasint = moedasint % (int)(moedas[i] * 100);
    }

    return 0;
}
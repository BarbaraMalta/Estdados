#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cod1, qtd1, cod2, qtd2;
    double valor1, valor2, totalpagar;
    cin >> cod1 >> qtd1 >> valor1;
    cin >> cod2 >> qtd2 >> valor2;
    totalpagar = (qtd1 * valor1) + (qtd2 * valor2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalpagar << endl;

    return 0;
}
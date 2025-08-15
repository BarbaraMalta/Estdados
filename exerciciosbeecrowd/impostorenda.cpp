#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario;
    cin >> salario >> fixed >> setprecision(2);

    if (salario <= 2000.00) {
        cout << "Isento" << endl;
    } else if (salario <= 3000.00) {
        cout << "R$ " << fixed << setprecision(2) << (salario - 2000.00) * 0.08 << endl;
    } else if (salario <= 4500.00) {
        cout << "R$ " << fixed << setprecision(2) << 1000.00 * 0.08 + (salario - 3000.00) * 0.18 << endl;
    } else {
        cout << "R$ " << fixed << setprecision(2) << 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28 << endl;
    }
    return 0;
}
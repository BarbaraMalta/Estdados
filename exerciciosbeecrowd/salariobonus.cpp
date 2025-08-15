#include <iostream> 
#include <iomanip> 
using namespace std;

int main() {
    string nomefunc;
    double salario, vendas, total;
    cin >> nomefunc;
    cin >> salario;
    cin >> vendas;
    total = salario + (vendas * 0.15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}
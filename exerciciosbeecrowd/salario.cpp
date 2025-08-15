#include <iostream> 
#include <iomanip> 
using namespace std;

int main() {
    int numfunc, numhoras;
    double valorhora, salario;
    cin >> numfunc;
    cin >> numhoras;
    cin >> valorhora;
    salario = numhoras * valorhora;
    cout << "NUMBER = " << numfunc << endl << "SALARY = U$" << fixed << setprecision(2) << salario << endl;
    return 0;
}
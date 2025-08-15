#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int horasgastas, velmedia, distancia;
    double qtdlitros;
    cin >> horasgastas; 
    cin >> velmedia;
    distancia = (horasgastas * velmedia);
    qtdlitros = distancia / 12.0;
    cout << fixed << setprecision(3) << qtdlitros << endl;

    return 0;
}
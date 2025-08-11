#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159;
    double A, B, C;
    cin >> A >> B >> C;
    double areatriangulo = (A * C) / 2.0;
    double areacirculo = pi * C * C;
    double areatrapezio = ((A + B) * C) / 2.0;
    double areaquadrado = B * B;
    double arearetangulo = A * B;
    cout << "TRIANGULO: " << fixed << setprecision(3) << areatriangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areacirculo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areatrapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaquadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << arearetangulo << endl;
    
    return 0;
}
#include <iostream> // Libs Entrada/Saída C++
#include <iomanip>
using namespace std;

int main(){
    float pi = 3.14159;
    float raio;
    cin >> raio;
    float area = pi * raio * raio;
    cout << "A=" << area << endl;
    cout << fixed << setprecision(4) << area << endl;
    return 0;
}
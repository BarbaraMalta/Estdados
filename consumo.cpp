#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X;
    double Y;
    cin >> X;
    cin >> fixed >> setprecision(1) >> Y;
    double consumo = X / Y;
    cout << fixed << setprecision(3) << consumo << " km/l" << endl;

    return 0;
} 
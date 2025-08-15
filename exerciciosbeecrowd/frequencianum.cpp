#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int contagem[2001] = {0};

    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;
        contagem[X]++;
    }
    for (int i = 0; i <= 2000; i++) {
        if (contagem[i] > 0) {
            cout << i << " aparece " << contagem[i] << " vez(es)" << endl;
        }
    }

    return 0;
}
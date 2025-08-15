#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int E[61] = {0};
        int D[61] = {0};
        for (int i = 0; i < N; ++i) {
            int M;
            char L;
            cin >> M >> L;
            if (L == 'E')
                E[M]++;
            else
                D[M]++;
        }
        int pares = 0;
        for (int M = 30; M <= 60; ++M) {
    if (E[M] < D[M])
        pares += E[M];
    else
        pares += D[M];
}
        cout << pares << endl;
    }
    return 0;
}
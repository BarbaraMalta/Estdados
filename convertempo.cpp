#include <iostream>
using namespace std;


int main() {
    int N, hrs, min, segs;
    cin >> N;
    hrs = N / 3600;
    min = (N % 3600) / 60;
    segs = N % 60;
    cout << hrs << ":" << min << ":" << segs << endl;

    return 0;
}   
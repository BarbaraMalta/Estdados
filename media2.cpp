#include <iostream> 
using namespace std;

int main(){
    double A, B, C, media;
    cin >> A;
    cin >> B;
    cin >> C;
    media = (A * 2 + B * 3 + C * 5) / 10.0;
    printf("MEDIA = %.1f\n", media);

    return 0;
}
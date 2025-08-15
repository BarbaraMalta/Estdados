#include <iostream> 
using namespace std;
// tipo nome (conjunto de parametros) assinatura da funcao
int main(){
    double A, B, media;
    cin >> A;
    cin >> B;
    media = (A * 3.5 + B * 7.5) / 11.0;
    printf("MEDIA = %.5f\n", media);

    return 0;
}
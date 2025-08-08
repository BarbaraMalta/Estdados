#include <iostream> 
#include <iomanip>// Libs Entrada/Saída C++
using namespace std;
// tipo nome (conjunto de parametros) assinatura da funcao
int main(){
    float x = 3.4535839;
    float y = 4.05935309;
    printf("%.2f\n, ", x);
    printf("%.2f\n, ", y);
    cout << fixed << setprecision(4) << x << endl;

    return 0;
}
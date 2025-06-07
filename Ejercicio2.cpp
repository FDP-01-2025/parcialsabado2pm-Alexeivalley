#include <iostream>
using namespace std;

int main(){

    int n, suma = 0;
    cout << "Ingrese un numero n y le mostrare la suma de todos los digitos hasta n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++){
        suma+=i;
    }
    cout << "La suma de todos tus digitos hasta n es: " << suma;

    return 0;
}
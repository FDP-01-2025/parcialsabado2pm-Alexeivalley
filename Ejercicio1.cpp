#include <iostream>
using namespace std;

int main(){

    int n;
    int i = 0;
    cout << "Ingrese un numero n y se le dira la secuencia de numeros impares hasta n" << endl;
    cin >> n;
    cout << endl;

    do{
        if (i%2 != 0){
            cout << i << endl;
        }
        i++;
    }while (i < n);

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    const int n=5, m=4; float nota, sumaG=0; // x
    for (int i = 1; i <= n; i++){
        float sumaE=0;
        cout << "Estudiante " << i << "\n";

        for (int j = 1; j <= m; j++){
            cout << "Examen " << j << ": ";
            cin >> nota;
            sumaE += nota;
        }

        float prom = sumaE/m;
        cout << endl;
        cout << "Promedio: " << prom << endl;
        cout << "Estado: " << (prom >= 7.0?"Aprobado\n\n":"Reprobado\n\n");

        sumaG += prom;
    }
    cout << "Promemedio general: " << sumaG/n << endl;

    return 0;
}
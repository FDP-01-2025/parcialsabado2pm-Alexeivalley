#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;
    int carnet[8];
    string ord[8] = {"Primer", "Segundo", "Tercer", "Cuarto", "Quinto", "Sexto", "Septimo", "Octavo"};
    cout << "Ingrese su nombre y su carnet" << endl;
    cout << "Nombre: "; cin >> name;
    cout << endl;
    cout << "Ingrese su carnet (ingresar sus 8 digitos)" << endl;
    for (int i = 0; i <= 7; i++){
        cout << ord[i] << " digito de su carnet: ";
        cin >> carnet[i];
    }
    cout << "Su carnet es: ";
    for (int j = 0; j <= 7; j++){
        cout << carnet[j];
    }
    cout << endl << endl;
    int Libros[3] = {0, 0, 0,}; // 0-1-2
    cout << "--Bienvenido al CRAI--" << endl;
    cout << "(Se presta un minimo de 3 libros por alumno)" << endl << endl;
    int opcion, OpLib;
    bool lib1 = false;
    bool lib2 = false;
    bool lib3 = false;

    do{
        cout << "--MENU--\n1. Prestar libro\n2. Devolver libro\n3. Salir\n\n";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Escoja un libro\n1. Libro de Algebra\n2. Libro de Fisica\n3. Libro de psicologia\n\n" << endl;
            cin >> OpLib;
                switch (OpLib)
                {
                case 1:
                if (Libros[0] == 0){
                    cout << "Prestamos exitoso" << endl << endl;
                    Libros[0] = 1;
                    lib1 = true;
                } else if (Libros[0] == 1){
                    cout << "Tienes en posesion este libro" << endl << endl;
                }
                    break;
                case 2:
                if (Libros[1] == 0){
                    cout << "Prestamos exitoso" << endl << endl;
                    Libros[1] = 1;
                } else if (Libros[1] == 1){
                    cout << "Tienes en posesion este libro" << endl << endl;
                }
                lib2 = true;
                    break;
                case 3:
                if (Libros[2] == 0){
                    cout << "Prestamos exitoso" << endl << endl;
                    Libros[2] = 1;
                } else if (Libros[2] == 1){
                    cout << "Tienes en posesion este libro" << endl << endl;
                }
                lib3 = true;
                    break;
                default:
                    cout << "Opcion invalida\n\n";
                    break;
                }
            break;
        case 2:
                cout << "Tus libros en posesion\n\n";
                    if (lib1 == true){
                        cout << "Libro de Algebra\n";
                    }
                    if (lib2 == true){
                        cout << "Libro de Fisica\n";
                    }
                    if (lib3 == true){
                        cout << "Libro de Psicologia\n";
                    }
            break;
        default:
            cout << "Opcion invalida\n\n";
            break;
        }
    } while (opcion != 3);
    

    
        


    return 0;
}
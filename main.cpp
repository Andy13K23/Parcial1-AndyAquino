#include <iostream>
using namespace std;
/*
int main() {
    cout << "Tablas de Multiplicar Primer Parcial - Inciso 1" << endl;
    cout << "INGRESE EL NUMERO DE LA TABLA QUE DESEA:"<< endl;
    int Tabla;
    cin>>Tabla;


    for (int a = 1;  a <= 10; a++) {
        {
            cout << Tabla << " * " << a << " = " << Tabla * a << endl;
        }
    }
    cout << "" << endl;
    cout << "Andy Aquino" << endl;
    return 0;
}
*/
// --------------------------------------------------------------------------------
/*
int main() {
    int Tablas = 1;

    cout << "Tablas de Multiplicar Primer Parcial - Inciso 2" << endl;
    cout <<"Tablas del 3, 7 y 9" << endl;

    while (Tablas <= 10) {

        cout << "3 x " << Tablas << " = " << 3 * Tablas << "\t";

        cout << "7 x " << Tablas << " = " << 7 * Tablas << "\t";

        cout << "9 x " << Tablas << " = " << 9 * Tablas << "\n";

        Tablas++;
    }
    return 0;
}
*/
// ----------------------------------------------------------------------------------
/*
int main() {

    int diaS;

    cout << "Ingrese un numero del 1 al 7" << endl;
    cout << "El cual representa el dia de la semana: " << endl;
    cin >> diaS;

    switch(diaS) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "El dia " << diaS << " es laboral.\n";
            break;
        case 7:
            cout << "El dia " << diaS << " no es laboral.\n";
    }

    return 0;
}
*/
// ---------------------------------------------------------------------------

#include <fstream>
#include <string>

void actualizarArchivo() {
    fstream archivo("C:/parcial.txt", std::ios::in | std::ios::out);

    if (!archivo) {
        std::cout << "No se pudo abrir el archivo.\n";
        return;
    }

    string nombre;
    archivo >> nombre;

    nombre += "0909-22-1669";

    archivo.seekp(0, std::ios::end);

    archivo << nombre;

    archivo.close();

    archivo.open("C:/parcial.txt", std::ios::in);

    if (!archivo) {
        cout << "No se pudo abrir el archivo.\n";
        return;
    }

    string contenido((std::istreambuf_iterator<char>(archivo)), (std::istreambuf_iterator<char>()));
    cout << "Contenido del archivo actualizado:\n" << contenido << std::endl;

    // Cerrar el archivo
    archivo.close();
}

int main() {
    actualizarArchivo();
    return 0;
}
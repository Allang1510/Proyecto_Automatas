#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include "Expresion1.cpp"
#include "Expresion2.cpp"
#include "Expresion3.cpp"
#include "Expresion4.cpp"
#include "Expresion5.cpp"
using namespace std;

queue <char> cola1;
queue <char> cola2;
queue <char> cola3;
queue <char> cola4;
queue <char> cola5;

vector<vector<string>> leerArchivoPorTabuladores(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    vector<vector<string>> subcadenas;

    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo: " << nombreArchivo << endl;
        return subcadenas;
    }

    string linea;
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string subcadena;
        vector<string> subcadenasLinea;

        // Dividir la línea por tabuladores
        while (getline(ss, subcadena, '\t')) {
            subcadenasLinea.push_back(subcadena);
        }

        // Guardar el resultado en el vector de subcadenas
        subcadenas.push_back(subcadenasLinea);
    }

    archivo.close();
    return subcadenas;
}

void separar_ingresar(string palabra) {
    for (char c : palabra) {
        cout << c << " "; // Imprime cada carácter seguido de un espacio
        if (isalpha(c)) {
            cola1.push(c);
            cola2.push(c);
            cola3.push(c);
        }
        else {
            cola4.push(c);
            cola5.push(c);
        }
        cout << endl;

    }
    Expresion1 E1 = Expresion1(cola1);
    E1.ejecutar();

    Expresion2 E2 = Expresion2(cola2);
    E2.ejecutar();

    Expresion3 E3 = Expresion3(cola3);
    E3.ejecutar();

    Expresion4 E4 = Expresion4(cola4);
    E4.ejecutar();

    Expresion5 E5 = Expresion5(cola5);
    E5.ejecutar();
}

int main() {
    string nombreArchivo = "archivo.txt";  // Reemplaza con el nombre de tu archivo
    vector<vector<string>> resultado = leerArchivoPorTabuladores(nombreArchivo);

    // Imprimir el contenido del archivo, separado por tabuladores
    for (const auto& fila : resultado) {
        for (const auto& subcadena : fila) {
            cout << subcadena << " ";
            separar_ingresar(subcadena);
            cout << '\t' << endl;
        }
        cout << endl;
    }

    return 0;
}


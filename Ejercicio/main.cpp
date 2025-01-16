#include <iostream>
#include "Pelicula.hpp"
#include "Serie.hpp"

using namespace std;

void mostrarMenu();

int main() {
    Pelicula pelicula1("Wicked", "Musical", 5, 2024, 125, "Jon M. Chu");
    Pelicula pelicula2("Harry Potter y la Piedra Filosofal", "Fantasia", 5, 2001, 152, "Chris Columbus");

    Serie serie1("Friends", "Comedia", 5, 1994, 22, 236, 10);
    Serie serie2("Hora de Aventura", "Comedia", 5, 2010, 11, 283, 10);
    Serie serie3("The Office", "Comedia", 5, 2005, 22, 201, 9);

    Video* videos[5] = {&pelicula1, &pelicula2, &serie1, &serie2, &serie3};

    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nLista de videos:" << endl;
                for (int i = 0; i < 5; i++) {
                    cout << "\nVideo " << i + 1 << ":" << endl;
                    videos[i]->muestraDatos();
                }
                break;
            case 2:
                cout << "saliendo" << endl;
                break;
            default:
                cout << "opcion invalida" << endl;
        }
    } while (opcion != 2);

    return 0;
}

void mostrarMenu() {
    cout << "\nMenu:\n1. ver videos\n2. Salir\nSeleccionar: ";
}

#include "Pelicula.hpp"
#include <iostream>

Pelicula::Pelicula(string nom, string gene, int cali, int ano, int dura, string dir)
    : Video("Pelicula", nom, gene, cali, ano, dura), director(dir) {}

void Pelicula::setDirector(string dir) {
    director = dir;
}


string Pelicula::getDirector() const {
    return director;
}


void Pelicula::muestraDatos() const {
    Video::muestraDatos();
    cout << "director: " << director << endl;
}


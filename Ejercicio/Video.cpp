#include "Video.hpp"

Video::Video()
    : tipoVideo(""), nombreVideo(""), genero(""), calificacion(0), anioLanzamiento(0), duracion(0) {}

Video::Video(string tipo, string nom, string gen, int cali, int ano, int dura)
    : tipoVideo(tipo), nombreVideo(nom), genero(gen), calificacion(cali), anioLanzamiento(ano), duracion(dura) {}


void Video::setTipoVideo(string tipo) { tipoVideo = tipo; }
string Video::getTipoVideo() const { return tipoVideo; }

void Video::setNombreVideo(string nom) { nombreVideo = nom; }
string Video::getNombreVideo() const { return nombreVideo; }

void Video::setGenero(string gen) { genero = gen; }
string Video::getGenero() const { return genero; }

void Video::setCalificacion(int cali) { calificacion = cali; }
int Video::getCalificacion() const { return calificacion; }

void Video::setAnioLanzamiento(int ano) { anioLanzamiento = ano; }
int Video::getAnioLanzamiento() const { return anioLanzamiento; }

void Video::setDuracion(int dura) { duracion = dura; }
int Video::getDuracion() const { return duracion; }


void Video::muestraDatos() const {
    
    cout << "nombre: " << nombreVideo << endl;
    cout << "tipo: " << tipoVideo << endl;
    cout << "genero: " << genero << endl;
    cout << "año de Lanzamiento: " << anioLanzamiento << endl;
    cout << "duración: " << duracion << endl;
    cout << "calificación: " << calificacion << endl;
}

void Video::calificaVideo(int nuevaCalificacion) {
    if (nuevaCalificacion >= 0 && nuevaCalificacion <= 10) {
        calificacion = nuevaCalificacion;
    } else {
        cout << "debe ser enter 0 y 10" << endl;
    }
}
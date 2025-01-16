#include "Video.hpp"

Video::Video() {}

Video::Video(string tipo, string nom, string gene, int cali, int ano, int dura) {
    tipoVideo = tipo;
    nombreVideo = nom;
    genero = gene;
    calificacion = cali;
    anioLanzamiento = ano;
    duracion = dura;
}

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

void Video::calificaVideo(int nuevaCalificacion) { calificacion = nuevaCalificacion; }

void Video::muestraDatos() const {  
    cout << "nombre: " << nombreVideo << endl;
    cout << "tipo: " << tipoVideo << endl;
    cout << "año de Lanzamiento: " << anioLanzamiento << endl;
    cout << "genero: " << genero << endl;
    cout << "duración: " << duracion << endl;
    cout << "calificación: " << calificacion << endl;
}

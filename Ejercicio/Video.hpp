#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <iostream>

using namespace std;

class Video {

public:

    Video();
    Video(string tipo, string nom, string gene, int cali, int ano, int dura);

    void setTipoVideo(string tipo);
    string getTipoVideo() const;

    void setNombreVideo(string nom);
    string getNombreVideo() const;

    void setGenero(string gen);
    string getGenero() const;

    void setCalificacion(int cali);
    int getCalificacion() const;

    void setAnioLanzamiento(int ano);
    int getAnioLanzamiento() const;

    void setDuracion(int dura);
    int getDuracion() const;

    void calificaVideo(int nuevaCalificacion);
    void muestraDatos() const;


private:

    string tipoVideo;
    string nombreVideo;
    string genero;
    int calificacion;
    int anioLanzamiento;
    int duracion;


};

#endif 

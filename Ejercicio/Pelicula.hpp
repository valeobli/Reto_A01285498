#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "Video.hpp"

class Pelicula : public Video {
private:
    string director;

public:
    Pelicula(string nom, string gene, int cali, int ano, int dura, string dir);

    void setDirector(string dir);
    
    
    string getDirector() const;  

    
    void muestraDatos() const;
};

#endif

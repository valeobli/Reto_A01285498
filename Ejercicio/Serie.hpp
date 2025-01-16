#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
private:
    int numEpisodios;
    int numTemporadas;

public:
    Serie(string nom, string gene, int cali, int ano, int dura, int episodios, int temporadas);

    void setNumEpisodios(int episodios);
    int getNumEpisodios();

    void setNumTemporadas(int temporadas);
    int getNumTemporadas();

    void muestraDatos();
};

#endif

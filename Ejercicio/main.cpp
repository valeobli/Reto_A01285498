#include "Video.hpp"

int main() {

    Video video1("Pelicula", "Simba", "infantil", 6, 2009, 130);
    Video video2("Pelicula", "Wicked", "Ficcion", 7, 2024, 148);

    int opcion, calificacion, videoSeleccionado;
    do {
        cout << "menu:\n";
        cout << "1 ver videos\n";
        cout << "2 calificar un video\n";
        cout << "3 fin\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Video 1:\n";
                video1.muestraDatos();
                cout << endl;
                cout << "Video 2:\n";
                video2.muestraDatos();
                cout << endl;
                break;
            case 2:
                cout << "selecciona un video: ";
                cin >> videoSeleccionado;
                if (videoSeleccionado == 1 || videoSeleccionado == 2) {
                    cout << "ingresa la nueva calificación 0 al 10: ";
                    cin >> calificacion;
                    if (videoSeleccionado == 1) {
                        video1.calificaVideo(calificacion);
                    } else {
                        video2.calificaVideo(calificacion);
                    }
                } else {
                    cout << "no es valida la eleccion\n";
                }
                break;
            case 3:
                cout << "salir\n";
                break;
            default:
                cout << "no es valida esa opcion\n";
        }
    } while (opcion != 3);

    return 0;
}

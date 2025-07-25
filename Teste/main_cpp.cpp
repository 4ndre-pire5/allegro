#include <allegro5/allegro5.h>
#include <iostream>

int main(int argc, char **argv) {
    if (!al_init()) {
        std::cerr << "Falha ao iniciar a Allegro." << std::endl;
        return 1;
    }

    ALLEGRO_DISPLAY *display = nullptr;
    display = al_create_display(1024, 768);
    if (!display) {
        std::cerr << "Falha ao criar o display" << std::endl;
        al_destroy_display(display); // Certifique-se de destruir o display em caso de falha.
        return 1;
    }

    std::cout << "Allegro e display iniciados com sucesso!" << std::endl;

    al_rest(5.0); // Espera 5 segundos

    al_destroy_display(display);
    return 0;
}
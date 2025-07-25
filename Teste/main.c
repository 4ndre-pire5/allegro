#include <allegro5/allegro5.h>
#include <stdio.h>

int main(int argc, char **argv) {
    if (!al_init()) {
        fprintf(stderr, "Falha ao iniciar a Allegro.\n");
        return 1;
    }

    ALLEGRO_DISPLAY *display = NULL;
    display = al_create_display(640, 480);
    if (!display) {
        fprintf(stderr, "Falha ao criar o display.\n");
        al_destroy_display(display); // Certifique-se de destruir o display em caso de falha.
        return 1;
    }

    fprintf(stdout, "Allegro e display iniciados com sucesso!\n");

    al_rest(5.0); // Espera 5 segundos

    al_destroy_display(display);
    return 0;
}
#include "raylib.h"
#include "game.h"
#include "sound.h"

int main(void) {
    InitWindow(1000, 1900, "CANON vs BANDITS");
    SetTargetFPS(60);
    InitAudioDevice();

    InitSound(); // Charge BOUN et TAC
    InitGame();  // LIFE 1000, KILLS 0, Vague 1

    while (!WindowShouldClose()) {
        UpdateGame(); // Bouge canon, roquettes, bandits
        DrawGame();   // Dessine tout
    }

    UnloadSoundAll();
    CloseAudioDevice();
    CloseWindow();
    return 0;
}

#include "raylib/raylib-cpp.hpp"

int main() {
    int screenWidth = 1800;
    int screenHeight = 950;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");
    // raylib::Texture logo("raylib_logo.png");

    SetTargetFPS(60);

    while (!window.ShouldClose())
    {
        BeginDrawing();

        window.ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        // Object methods.
        // logo.Draw(
        //     screenWidth / 2 - logo.GetWidth() / 2,
        //     screenHeight / 2 - logo.GetHeight() / 2);

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}

// Nazwa pliku: NazwaPliku
// Nazwa Klasy: NazwaKlasu
// Nazwa zmiennych: nazwaZmiennej
// Member variable / static: m_ s_
// Nazwa funkcji: nazwaZmiennej
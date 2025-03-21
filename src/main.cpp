#include "raylib/raylib-cpp.hpp"
#include "ScreenManager.hpp"

int main() {
    int screenWidth = 1800;
    int screenHeight = 950;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");
    
    hackathon::ScreenManager screen(window);

    SetTargetFPS(60);

    while (!window.ShouldClose())
    {
        BeginDrawing();

        window.ClearBackground(RAYWHITE);

        screen.compute();

        screen.display();

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
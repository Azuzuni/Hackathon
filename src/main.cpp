#include "raylib/raylib-cpp.hpp"
#include "ScreenManager.hpp"
#include "GlobalVariables.hpp"

int main() {


    raylib::Window window(hackathon::screenWidth, hackathon::screenHeight, "U mnie dziala");
    
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
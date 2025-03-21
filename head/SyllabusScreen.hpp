#pragma once
#include "Screen.hpp"
#include <iostream>

namespace hackathon
{
    class SyllabusScreen : public Screen
    {
    public:
        SyllabusScreen(raylib::Window& window) :
            Screen(window),
            m_background(LoadTexture("../graphic/Tlo.jpg")) {};

        void compute() override {};

        void display() override {
            // Tlo
            DrawTexture(m_background, 0, 0, WHITE);

            // lewa kolumna
            const char* leftColumnText =
                "kolumna 1\n"
                

            //prawa kolumna
            const char* rightColumnText =
                "kolumna 21\n"
                

            
            int columnWidth = GetScreenWidth() / 2;

            
            int lineHeight = 30;

            
            for (int i = 0; i < 20; ++i) {
                DrawText(TextFormat("%s", leftColumnText), 10, 10 + i * lineHeight, 20, BLACK);
            }

            for (int i = 0; i < 20; ++i) {
                DrawText(TextFormat("%s", rightColumnText), columnWidth + 10, 10 + i * lineHeight, 20, BLACK);
            }
        };

    private:
        Texture2D m_background;
    };
}
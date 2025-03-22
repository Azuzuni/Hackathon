#pragma once
#include <vector>
#include "raylib/raylib.hpp"
#include "Screen.hpp"
#include "GlobalVariables.hpp"
#include <iostream>

namespace hackathon
{
	class ClearScreen : public Screen
	{
	public:
		ClearScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../../../graphic/Tlo.png")),
			m_button(LoadTexture("../../../graphic/buttond.png"))
		{
		}
		void compute() override
		{

		}
		void display() override
		{
			DrawTexture(m_background, 0, 0, WHITE);
            Vector2 mousePosition = GetMousePosition();
            Rectangle rec = {0,0,screenWidth,screenHeight};
            bool isHovered = CheckCollisionPointRec(mousePosition,rec);
            if(isHovered){
                if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                    s_score.resetScore();
                    S_SCREEN = "Roadmap";
                }
            }
            DrawScore();
        };
	private:
		raylib::Texture2D m_background;
		raylib::Texture2D m_button;
    private:
        inline void DrawScore() {
            DrawText(s_score.displayScore().c_str(),screenWidth/2.2,screenHeight/2,S_fontSize*3,S_fontColor);
        }
	};
}
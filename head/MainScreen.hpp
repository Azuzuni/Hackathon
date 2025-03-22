#pragma once
#include <vector>
#include "raylib/raylib.hpp"
#include "Screen.hpp"
#include "GlobalVariables.hpp"
#include <iostream>

namespace hackathon
{
	class MainScreen : public Screen
	{
	public:
		MainScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../../../graphic/Startowy.png"))
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
                if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) S_SCREEN = "Roadmap";
            }
            
        };
	private:
		raylib::Texture2D m_background;
	};
}
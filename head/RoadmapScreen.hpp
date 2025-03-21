#pragma once
#include <vector>
#include "raylib/raylib.hpp"
#include "Screen.hpp"

namespace hackathon
{
	class RoadmapScreen : public Screen
	{
	public:
		RoadmapScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../../../graphic/mapa.jpg"))
		{
		}
		void compute() override
		{

		}
		void display() override
		{
			DrawTexture(m_background, 0, 0, WHITE);
		}
	private:
		raylib::Texture2D m_background;
		std::vector <raylib::Texture2D> m_icons;
	};
}
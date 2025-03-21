#pragma once
#include <vector>
#include "raylib/raylib.hpp"
#include "Screen.hpp"
#include "Marker.hpp"

namespace hackathon
{
	class RoadmapScreen : public Screen
	{
	public:
		RoadmapScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../../../graphic/mapa.jpg")),
			m_marker(LoadTexture("../../../graphic/here.png"))
		{
		}
		void compute() override
		{

		}
		void display() override
		{
			DrawTexture(m_background, 0, 0, WHITE);
			CreateMarker(130,600,m_marker,"1");
		}
	private:
		Texture2D m_marker;
		raylib::Texture2D m_background;
		std::vector <raylib::Texture2D> m_icons;
	};
}
#pragma once
#include "raylib/raylib.hpp"
#include "Screen.hpp"

namespace hackathon
{
	class RoadmapScreen : public Screen
	{
	public:
		RoadmapScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../../../graphic/mapa.jpg")) {}
	private:
		raylib::Texture m_background;
	};
}
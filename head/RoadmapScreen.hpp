#pragma once
#include "raylib/raylib.hpp"
#include "Screen.hpp"

namespace hackathon
{
	class RoadmapScreen : public Screen
	{
	public:
		RoadmapScreen(raylib::Window& window) : m_window(window) {}

	};
}
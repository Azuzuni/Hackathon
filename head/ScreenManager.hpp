#pragma once
#include "raylib/raylib-cpp.hpp"

namespace hackathon
{
	class ScreenManager
	{
	public:
		ScreenManager(raylib::Window&);
		void compute();
		void display();
	private:
		raylib::Window& m_window;
	};
}
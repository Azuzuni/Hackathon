#include "raylib/raylib-cpp.hpp"

namespace hackathon
{
	class Screen
	{
	public:
		Screen(raylib::Window& window) : m_window(window){};
		virtual void compute();
		virtual void display();
	protected:
		raylib::Window& m_window;
	};
}
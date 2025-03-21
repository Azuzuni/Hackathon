#include "raylib/raylib-cpp.hpp"

namespace hackathon
{
	class Screen
	{
	public:
		Screen();
		virtual void compute(raylib::Window& window);
		virtual void display(raylib::Window& window);
	protected:
	};
}
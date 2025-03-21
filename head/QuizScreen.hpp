#include "Screen.hpp"

namespace hackathon
{
	class QuizScreen : public Screen
	{
		QuizScreen();
		override compute(raylib::Window& window);
		override display(raylib::Window& window);
	};
}
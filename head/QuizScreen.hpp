#include "Screen.hpp"

namespace hackathon
{
	class QuizScreen : public Screen
	{
		QuizScreen(raylib::Window& window) : Screen(window){};
		void compute() override;
		void display() override;
	};
}
#pragma once
#include "Screen.hpp"

namespace hackathon
{
	class QuizScreen : public Screen
	{
		public:
			QuizScreen(raylib::Window& window) : Screen(window){};
			void compute() override {};
			void display() override {};
		private:
			
		
	};
}
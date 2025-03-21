#pragma once
#include "Screen.hpp"
#include <iostream>

namespace hackathon
{
	class QuizScreen : public Screen
	{
		public:
			QuizScreen(raylib::Window& window) :
				Screen(window), 
				m_background(LoadTexture("../graphic/pytanie.jpg")){};
			
			void compute() override {};
			void display() override {
				DrawTexture(m_background,0,0,WHITE);
				
			};
		private:
			Texture2D m_background;
			
		
	};
	
}
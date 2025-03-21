#pragma once
#include "Screen.hpp"
#include <iostream>

namespace hackathon
{
	class SyllabusScreen : public Screen
	{
	public:
		SyllabusScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../graphic/pytanie.jpg")) {};

		void compute() override {};
		void display() override {
			DrawTexture(m_background, 0, 0, WHITE);

		};
	private:
		Texture2D m_background;


	};

}
#pragma once
#include <unordered_map>
#include <memory>
#include <string>
#include "raylib/raylib-cpp.hpp"

#include "Screen.hpp"
#include "QuizScreen.hpp"
#include "SyllabusScreen.hpp"

namespace hackathon
{
	class ScreenManager
	{
	public:
		ScreenManager(raylib::Window&);
		void compute();
		void display();
	private:
		inline void processChangeRequest()
		{
			ChangeRequest temp = m_screens[m_currentScreen]->checkRequest();
			if (!temp.requestReviewed) m_currentScreen=temp.requestedScreen;
		}
		std::string m_currentScreen;
		std::unordered_map<std::string,std::unique_ptr<Screen>> m_screens;
		raylib::Window& m_window;
	};
}
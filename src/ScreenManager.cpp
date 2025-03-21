#include "ScreenManager.hpp"
#include "QuizScreen.hpp"
#include "RoadmapScreen.hpp"
#include "GlobalVariables.hpp"

namespace hackathon
{
	ScreenManager::ScreenManager(raylib::Window& window) : m_window(window)
	{
		m_currentScreen = S_SCREEN;
		m_screens["Quiz"] = std::make_unique<QuizScreen>(window,"../../../questions/pytania1.txt");
		m_screens["Roadmap"] = std::make_unique<RoadmapScreen>(window);
	}

	void ScreenManager::compute()
	{
		processChangeRequest();
		m_screens[m_currentScreen]->compute();
	}

	void ScreenManager::display()
	{
		m_screens[m_currentScreen]->display();
		m_currentScreen = S_SCREEN;
	}
}
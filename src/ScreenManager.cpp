#include "ScreenManager.hpp"
#include "QuizScreen.hpp"

namespace hackathon
{
	ScreenManager::ScreenManager(raylib::Window& window) : m_window(window)
	{
		m_currentScreen = "Quiz";
		m_screens["Quiz"] = std::make_unique<QuizScreen>(window, "../../../questions/pytania.txt");
	}

	void ScreenManager::compute()
	{
		processChangeRequest();
		m_screens[m_currentScreen]->compute();
	}

	void ScreenManager::display()
	{
		m_screens[m_currentScreen]->display();
	}
}
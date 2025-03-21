#include "ScreenManager.hpp"
#include "QuizScreen.hpp"

namespace hackathon
{
	ScreenManager::ScreenManager(raylib::Window& window) : m_window(window)
	{
		m_currentScreen = "main";
		m_screens["main"] = std::make_unique<QuizScreen>(window);
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
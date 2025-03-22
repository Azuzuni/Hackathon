#include "ScreenManager.hpp"
#include "QuizScreen.hpp"
#include "RoadmapScreen.hpp"
#include "GlobalVariables.hpp"
#include "MainScreen.hpp"
#include "ClearScreen.hpp"
#include "thread"
#include "fstream"

namespace hackathon
{
	int readSaveFile()
	{
		std::fstream file("../../../save/save_file.txt");
		int temp;
		file >> temp;
		if (file.fail())
		{
			file.close();
			return 0;
		}
		file.close();
		return temp;
	}
	
	ScreenManager::ScreenManager(raylib::Window& window) : m_window(window)
	{
		m_currentScreen = S_SCREEN;
		int progress = readSaveFile();
		for(int i{1}; i<=15; ++i) {
			m_screens["Quiz" + std::to_string(i)] = std::make_unique<QuizScreen>(window, "../../../questions/pytania" + std::to_string(i) + ".txt", i - 1);
		}
		m_screens["Roadmap"] = std::make_unique<RoadmapScreen>(window, progress);
		m_screens["MainScreen"] = std::make_unique<MainScreen>(window);
		m_screens["ClearScreen"] = std::make_unique<ClearScreen>(window);
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
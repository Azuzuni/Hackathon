#pragma once
#include <string>
#include "ScoreHandler.hpp"

namespace hackathon
{
	struct LevelManager
	{
		int level = 0;
		bool completed = false;
	};
	inline std::string S_SCREEN = "MainScreen";
	inline LevelManager completedLastQuiz{};
	inline int S_fontSize = 25;
	inline Color S_fontColor = BLACK;
	inline LevelManager last;
	inline ScoreHandler s_score = {15};
	constexpr inline int screenWidth = 1800;
    constexpr inline int screenHeight = 950;
}
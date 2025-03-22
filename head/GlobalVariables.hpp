#pragma once
#include <string>
#include "ScoreHandler.hpp"

namespace hackathon
{
	inline std::string S_SCREEN = "MainScreen";
	inline bool completedLastQuiz = false;
	inline int S_fontSize = 25;
	inline Color S_fontColor = BLACK;
	inline int lastScore = 0;
	inline ScoreHandler s_score = {15};
	constexpr inline int screenWidth = 1800;
    constexpr inline int screenHeight = 950;
}
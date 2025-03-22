#pragma once
#include <string>
#include "ScoreHandler.hpp"

namespace hackathon
{
	static std::string S_SCREEN = "MainScreen";
	static inline int S_fontSize = 25;
	static inline Color S_fontColor = BLACK;
	static inline int lastScore = 0;
	static inline ScoreHandler s_score = {15};
	constexpr inline int screenWidth = 1800;
    constexpr inline int screenHeight = 950;
}
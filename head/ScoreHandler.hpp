#pragma once    
#include "raylib/raylib-cpp.hpp"
#include <vector>
#include "WczytywanieDanych.hpp"

namespace hackathon {
    class ScoreHandler
    {
    private:
        size_t m_currentScore{0};
        size_t m_maxScore;
    public:
        ScoreHandler(size_t size) : m_maxScore(size){};
        std::string displayScore(int);
        std::string displayScore();
        inline void incrementScore() {
            ++m_currentScore;
        }
        inline void resetScore() {
            m_currentScore = 0;
        }
    };

}


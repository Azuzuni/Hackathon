#include "ScoreHandler.hpp"
#include "GlobalVariables.hpp"



std::string hackathon::ScoreHandler::displayScore(int question) {
    if (m_currentScore == m_maxScore)
    {
        last.completed = true;
        last.level = question;
    }
    return std::to_string(m_currentScore)+'/'+std::to_string(m_maxScore);
}

std::string hackathon::ScoreHandler::displayScore() {
    return std::to_string(m_currentScore) + '/' + std::to_string(m_maxScore);
}
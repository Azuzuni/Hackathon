#include "ScoreHandler.hpp"
#include "GlobalVariables.hpp"



std::string hackathon::ScoreHandler::displayScore() {
    if (m_currentScore == m_maxScore)
        hackathon::completedLastQuiz = true;
    return std::to_string(m_currentScore)+'/'+std::to_string(m_maxScore);
}
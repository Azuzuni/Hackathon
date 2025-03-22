#include "ScoreHandler.hpp"
#include "GlobalVariables.hpp"

void saveProgress(int level)
{
    std::fstream file("../../../save/save_file.txt");
    file << level;
    file.close();
}

std::string hackathon::ScoreHandler::displayScore(int question) {
    if (m_currentScore == m_maxScore)
    {
        last.completed = true;
        last.level = question;
        saveProgress(question + 1);
    }
    return std::to_string(m_currentScore)+'/'+std::to_string(m_maxScore);
}

std::string hackathon::ScoreHandler::displayScore() {
    return std::to_string(m_currentScore) + '/' + std::to_string(m_maxScore);
}
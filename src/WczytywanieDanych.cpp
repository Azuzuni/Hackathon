#include "WczytywanieDanych.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>


std::vector<hackathon::QuestionData> hackathon::wczytajDane(const std::string &QuestionDataFile) {
	int amount = 0;
	struct QuestionData dane;
	std::ifstream file(QuestionDataFile);  
	std::string line;
	while (std::getline(file, line)) {
		amount++;
	}
	file.clear();   
	file.seekg(0);
    std::vector<QuestionData> loadedQuestionData;
    for (int i = 0; i < amount; i++) {
		QuestionData dane;
		std::getline(file, dane.question);
		std::getline(file, dane.answers[0]);
		std::getline(file, dane.answers[1]);
		std::getline(file, dane.answers[2]);
		std::getline(file, dane.answers[3]);

        loadedQuestionData.push_back(dane); 
    }
	return loadedQuestionData;
	
}
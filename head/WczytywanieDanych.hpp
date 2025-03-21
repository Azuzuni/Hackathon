#pragma once
#include <iostream>
#include <fstream>
#include <vector>

namespace hackathon {
	struct QuestionData {
		std::string question;
		std::string answers[4];
	};
	std::vector<QuestionData> wczytajDane(const std::string &dataFile);
}
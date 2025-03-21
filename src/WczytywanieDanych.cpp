#include "WczytywanieDanych.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct data {
	std::string question;
	std::string answers[3];
};

void hackathon::wczytajDane(const std::string &dataFile) {
	int amount;
	struct data dane;
	std::ifstream file(dataFile);
	//if (!data.is_open()) ;  
	file >> amount;
    std::vector<data> loadedData;
    for (int i = 1; i <= amount; i++) {
		data dane;
		std::getline(file, dane.question);
		std::getline(file, dane.answers[0]);
		std::getline(file, dane.answers[1]);
		std::getline(file, dane.answers[2]);
		std::getline(file, dane.answers[3]);

        loadedData.push_back(dane);  
    }
}
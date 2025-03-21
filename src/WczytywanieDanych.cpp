#include "WczytywanieDanych.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>


std::vector<hackathon::data> hackathon::wczytajDane(const std::string &dataFile) {
	int amount = 0;
	struct data dane;
	std::ifstream file(dataFile);  
	while (!file.eof()) {
		amount++;
	}
    std::vector<data> loadedData;
    for (int i = 0; i < amount; i++) {
		data dane;
		std::getline(file, dane.question);
		std::getline(file, dane.answers[0]);
		std::getline(file, dane.answers[1]);
		std::getline(file, dane.answers[2]);
		std::getline(file, dane.answers[3]);

        loadedData.push_back(dane); 
    }
	return loadedData;
	
}
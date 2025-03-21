#include <iostream>
#include <fstream>
#include <vector>

namespace hackathon {
	struct data {
		std::string question;
		std::string answers[3];
	};
	void wczytajDane(const std::string &dataFile);
}
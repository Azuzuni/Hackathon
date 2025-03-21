#include <iostream>
#include <fstream>
#include <vector>

namespace hackathon {
	struct data {
		std::string question;
		std::string answers[4];
	};
	std::vector<data> wczytajDane(const std::string &dataFile);
}
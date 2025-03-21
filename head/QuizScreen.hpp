#pragma once
#include "Screen.hpp"
#include <iostream>
#include "WczytywanieDanych.hpp"
#include <vector>
#include "raylib/raylib-cpp.hpp"

namespace hackathon
{
	class QuizScreen : public Screen
	{
		public:
			QuizScreen(raylib::Window& window, const std::string& dataFile) :
				Screen(window), 
				m_background(LoadTexture("../../../graphic/pytanie.jpg"))
				{
					m_questions = wczytajDane(dataFile);
				};
			
			void compute() override {};
			void display() override {
				DrawTexture(m_background,0,0,WHITE);
			};
		private:
			Texture2D m_background;
			int m_index{0};
			std::vector<QuestionData> m_questions;
			
			
		
	};
	
}
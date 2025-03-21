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
				m_background(LoadTexture("../../../graphic/Pytanie.jpg")),
				m_buttonTexture(LoadTexture("../../../graphic/Button.png"))
				{
					m_questions = wczytajDane(dataFile);
				};
			
			void compute() override {};
			void display() override {
				DrawTexture(m_background,0,0,WHITE);
				const int screenWidth = m_window.GetWidth();
				const int screenHeight = m_window.GetHeight();

				DrawButton(70,250, 9,0);
				DrawButton(950,250, 9,1);
				DrawButton(70,630, 9,2);
				DrawButton(950,630, 9,3);
			};
		private:
			Texture2D m_background;
			Texture2D m_buttonTexture;
			int m_index{0};
			std::vector<QuestionData> m_questions;
			
		private:
			const void DrawButton(const int x, const int y, const int questionIndex,const int answerIndex) const {
				Vector2 mousePosition = GetMousePosition();
				Rectangle rec = {x,y,static_cast<double>(m_buttonTexture.width),static_cast<double>(m_buttonTexture.height)};
				bool isHovered = CheckCollisionPointRec(mousePosition,rec);
				if(!isHovered) DrawTexture(m_buttonTexture,x,y,WHITE);
				else DrawTexture(m_buttonTexture,x,y,GRAY);
				DrawText(m_questions[questionIndex].answers[answerIndex].c_str(),x+(m_buttonTexture.width/10),y+(m_buttonTexture.height/3),30,BLACK);

			}			
		
	};
	
}
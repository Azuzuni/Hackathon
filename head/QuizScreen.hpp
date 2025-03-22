#pragma once
#include "Screen.hpp"
#include <iostream>
#include "WczytywanieDanych.hpp"
#include <vector>
#include "raylib/raylib-cpp.hpp"
#include <string>
#include "GlobalVariables.hpp"

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
				DrawQuestion(m_index);
				DrawButton(70,250, m_index,0);
				DrawButton(950,250, m_index,1);
				DrawButton(70,630, m_index,2);
				DrawButton(950,630, m_index,3);
			};
		private:
			Texture2D m_background;
			Texture2D m_buttonTexture;
			int m_index = {0};
			std::vector<QuestionData> m_questions;
			int m_pathIndex = {1};
			
		private:
			inline void DrawQuestion(const int questionIndex) {
				DrawText(m_questions[questionIndex].question.c_str(),150,110,S_fontSize,S_fontColor);
			} 
			void DrawButton(const int x, const int y, const int questionIndex,const int answerIndex) {
				Vector2 mousePosition = GetMousePosition();
				float width = static_cast<float>(m_buttonTexture.width);
				float height = static_cast<float>(m_buttonTexture.height);
				Rectangle rec = {x,y,{width},{height}};
				bool isHovered = CheckCollisionPointRec(mousePosition,rec);
				if(!isHovered) DrawTexture(m_buttonTexture,x,y,WHITE);
				else {
					DrawTexture(m_buttonTexture,x,y,GRAY);
					if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) ++m_index;
				}
				if(m_index>=m_questions.size()/5) {
					m_index = {0};	
					S_SCREEN = "Roadmap";
				};
				
				DrawText(m_questions[questionIndex].answers[answerIndex].c_str(),x+(m_buttonTexture.width/10),y+(m_buttonTexture.height/3),S_fontSize,S_fontColor);

			}			
	};
	
}
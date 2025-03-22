#pragma once
#include "Screen.hpp"
#include <iostream>
#include "WczytywanieDanych.hpp"
#include <vector>
#include "raylib/raylib-cpp.hpp"
#include <string>
#include "GlobalVariables.hpp"
#include <stdlib.h>
#include <ctime>
#include "ScoreHandler.hpp"

namespace hackathon
{
	class QuizScreen : public Screen
	{
		public:
			QuizScreen(raylib::Window& window, const std::string& dataFile) :
				Screen(window), 
				m_background(LoadTexture("../../../graphic/Pytanie.jpg")),
				m_buttonTexture(LoadTexture("../../../graphic/Button.png")),
                m_questions(wczytajDane(dataFile))
				{
				};
			 
			void compute() override {};
			void display() override {
				DrawTexture(m_background,0,0,WHITE);
				DrawQuestion(m_index);
				DrawButton(70,250, m_index,m_answers[0]);
				DrawButton(950,250, m_index,m_answers[1]);
				DrawButton(70,630, m_index,m_answers[2]);
				DrawButton(950,630, m_index,m_answers[3]);
                DrawScore();
			};
		private:
			
            Texture2D m_background;
            Texture2D m_buttonTexture;
            int m_index = {0};
            std::vector<QuestionData> m_questions;
            std::vector<int> m_answers = RandVec(4);
            int m_pathIndex = {1};
            ScoreHandler m_score{m_questions.size()/5};
			
		private:
			inline void DrawQuestion(const int questionIndex) {
				DrawText(m_questions[questionIndex].question.c_str(),150,110,S_fontSize,S_fontColor);
			} 
            inline void DrawScore() {
                DrawText(m_score.displayScore().c_str(),screenWidth-200,100,S_fontSize*2,S_fontColor);
            }
			void DrawButton(const int x, const int y, const int questionIndex,const int answerIndex) {
				Vector2 mousePosition = GetMousePosition();
				float width = m_buttonTexture.width;
				float height = m_buttonTexture.height;
				Rectangle rec = {x,y,float(width),float(height)};
				bool isHovered = CheckCollisionPointRec(mousePosition,rec);
				if(!isHovered) DrawTexture(m_buttonTexture,x,y,WHITE);
				else {
					DrawTexture(m_buttonTexture,x,y,GRAY);
					if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){ 
                        if(m_questions[questionIndex].answers[0] == m_questions[questionIndex].answers[answerIndex]) m_score.incrementScore();
						m_answers = RandVec(4);
						++m_index;
					}
				}
				if(m_index>=m_questions.size()/5) {
					m_index = {0};	
                    m_score.resetScore();
					S_SCREEN = "Roadmap";
				};
				
				DrawText(m_questions[questionIndex].answers[answerIndex].c_str(),x+(m_buttonTexture.width/10),y+(m_buttonTexture.height/3),S_fontSize,S_fontColor);

			}		
			std::vector<int> RandVec(int size) {
				std::srand(std::time(0));
				std::vector<int> result;
				while(result.size()<size) {
					int x = std::rand()%size;
					if(result.empty()) result.push_back(x);
                    bool copy{false};
					for(auto& value : result) {
                        for(auto& value2 : result) {
                            if(value == x) copy=true;
                        }
					}
                    if(!copy) {
                        result.push_back(x);
                        copy=false;
                    };
				}
				return result;
			}	
	};
	
}
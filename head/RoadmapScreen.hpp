#pragma once
#include <vector>
#include "raylib/raylib.hpp"
#include "Screen.hpp"
#include "Marker.hpp"
#include <iostream>

namespace hackathon
{
	class RoadmapScreen : public Screen
	{
	public:
		RoadmapScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../../../graphic/mapa.jpg")),
			m_marker(LoadTexture("../../../graphic/here.png"))
		{
		}
		void compute() override
		{

		}
		void display() override
		{
			DrawTexture(m_background, 0, 0, WHITE);
			CreateMarker(130,600,m_marker,"1",[](){S_SCREEN = "Quiz1";});
			CreateMarker(320,530,m_marker,"2",[](){S_SCREEN = "Quiz2";});
			CreateMarker(450,440,m_marker,"3",[](){S_SCREEN = "Quiz3";});
			CreateMarker(590,520,m_marker,"4",[](){S_SCREEN = "Quiz4";});
			CreateMarker(675,620,m_marker,"5",[](){S_SCREEN = "Quiz5";});
			CreateMarker(830,670,m_marker,"6",[](){S_SCREEN = "Quiz6";});
			CreateMarker(880,550,m_marker,"7",[](){S_SCREEN = "Quiz7";});
			CreateMarker(850,420,m_marker,"8",[](){S_SCREEN = "Quiz8";});
			CreateMarker(970,290,m_marker,"9",[](){S_SCREEN = "Quiz9";});
			CreateMarker(1080,410,m_marker,"10",[](){S_SCREEN = "Quiz10";});
			CreateMarker(1210,420,m_marker,"11",[](){S_SCREEN = "Quiz11";});
			CreateMarker(1350,290,m_marker,"12",[](){S_SCREEN = "Quiz12";});
			CreateMarker(1290,510,m_marker,"13",[](){S_SCREEN = "Quiz13";});
			CreateMarker(1300,650,m_marker,"14",[](){S_SCREEN = "Quiz14";});
			CreateMarker(1420,750,m_marker,"15",[](){S_SCREEN = "Quiz15";});
		}
	private:
		Texture2D m_marker;
		raylib::Texture2D m_background;
		std::vector <raylib::Texture2D> m_icons;
	};
}
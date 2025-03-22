#pragma once
#include <vector>
#include "raylib/raylib.hpp"
#include "Screen.hpp"
#include "Marker.hpp"
#include <iostream>
#include <array>

namespace hackathon
{
	struct ButtonInfo
	{
		int x;
		int y;
		std::string text;
		std::string screenSelector;
	};

	class RoadmapScreen : public Screen
	{
	public:
		RoadmapScreen(raylib::Window& window) :
			Screen(window),
			m_background(LoadTexture("../../../graphic/mapa.jpg")),
			m_marker(LoadTexture("../../../graphic/here.png"))
		{
			m_buttons[0] = { 130, 600, "1", "Quiz1" };
			m_buttons[1] = { 320, 530, "2", "Quiz2" };
			m_buttons[2] = { 450, 440, "3", "Quiz3" };
			m_buttons[3] = { 590, 520, "4", "Quiz4" };
			m_buttons[4] = { 675, 620, "5", "Quiz5" };
			m_buttons[5] = { 830, 670, "6", "Quiz6" };
			m_buttons[6] = { 880, 550, "7", "Quiz7" };
			m_buttons[7] = { 850, 420, "8", "Quiz8" };
			m_buttons[8] = { 970, 290, "9", "Quiz9" };
			m_buttons[9] = { 1080, 410, "10", "Quiz10" };
			m_buttons[10] = { 1210, 420, "11", "Quiz11" };
			m_buttons[11] = { 1350, 290, "12", "Quiz12" };
			m_buttons[12] = { 1290, 510, "13", "Quiz13" };
			m_buttons[13] = { 1300, 650, "14", "Quiz14" };
			m_buttons[14] = { 1420, 750, "15", "Quiz15" };
		}
		void compute() override
		{

		}
		void display() override
		{
			DrawTexture(m_background, 0, 0, WHITE);
			for (int i =0;i<15;i++)
				CreateMarker(m_buttons[i].x, m_buttons[i].y, m_marker, m_buttons[i].text, [](const std::string& screen) {S_SCREEN = screen;}, m_buttons[i].screenSelector);
			/*CreateMarker(130, 600, m_marker, "1", []() {S_SCREEN = "Quiz1";});
			CreateMarker(320, 530, m_marker, "2", []() {S_SCREEN = "Quiz2";});
			CreateMarker(450, 440, m_marker, "3", []() {S_SCREEN = "Quiz3";});
			CreateMarker(590, 520, m_marker, "4", []() {S_SCREEN = "Quiz4";});
			CreateMarker(675, 620, m_marker, "5", []() {S_SCREEN = "Quiz5";});
			CreateMarker(830, 670, m_marker, "6", []() {S_SCREEN = "Quiz6";});
			CreateMarker(880, 550, m_marker, "7", []() {S_SCREEN = "Quiz7";});
			CreateMarker(850, 420, m_marker, "8", []() {S_SCREEN = "Quiz8";});
			CreateMarker(970, 290, m_marker, "9", []() {S_SCREEN = "Quiz9";});
			CreateMarker(1080, 410, m_marker, "10", []() {S_SCREEN = "Quiz10";});
			CreateMarker(1210, 420, m_marker, "11", []() {S_SCREEN = "Quiz11";});
			CreateMarker(1350, 290, m_marker, "12", []() {S_SCREEN = "Quiz12";});
			CreateMarker(1290, 510, m_marker, "13", []() {S_SCREEN = "Quiz13";});
			CreateMarker(1300, 650, m_marker, "14", []() {S_SCREEN = "Quiz14";});
			CreateMarker(1420, 750, m_marker, "15", []() {S_SCREEN = "Quiz15";});*/
		}
	private:
		Texture2D m_marker;
		raylib::Texture2D m_background;
		std::vector <raylib::Texture2D> m_icons;
		std::array<ButtonInfo, 15> m_buttons;
	};
}
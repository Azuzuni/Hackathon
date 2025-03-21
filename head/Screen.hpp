#pragma once
#include "raylib/raylib-cpp.hpp"

namespace hackathon
{
	struct ChangeRequest
	{
		bool requestReviewed = true;
		std::string requestedScreen = "main";
	};

	class Screen
	{
	public:
		Screen(raylib::Window& window) : m_window(window){};
		virtual void compute();
		virtual void display();
		inline const ChangeRequest checkRequest()
		{
			ChangeRequest temp = m_request;
			m_request.requestReviewed = true;
			return temp;
		}
	protected:
		inline void requestScreenChange(std::string request)
		{
			m_request.requestReviewed = false;
			m_request.requestedScreen = request;
		}

		ChangeRequest m_request;
		raylib::Window& m_window;
	};
}
#pragma once
#include "raylib/raylib-cpp.hpp"
#include "GlobalVariables.hpp"


namespace hackathon {
    void CreateMarker(const int x, const int y,Texture2D texture,const std::string& text, void (*func)());
}
#include "Marker.hpp"

void hackathon::CreateMarker(const int x, const int y,Texture2D texture,const std::string& text, void (*func)(const std::string& screen), const std::string& selectedScreen) {
    Vector2 mousePosition = GetMousePosition();
    float width = static_cast<float>(texture.width);
    float height = static_cast<float>(texture.height);
    Rectangle rec = {x,y,width,height};
    bool isHovered = CheckCollisionPointRec(mousePosition,rec);
    if(!isHovered) DrawTexture(texture,x,y,WHITE);
    else {
        DrawTexture(texture,x,y,GRAY);
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) func(selectedScreen);
    }
    // if(m_index>=m_questions.size()/5) S_SCREEN = "Roadmap";
    
    DrawText(text.c_str(),x+(texture.width),y+(texture.height),S_fontSize,S_fontColor);

}	
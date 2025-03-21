#include "Marker.hpp"

void hackathon::CreateMarker(const int x, const int y,Texture2D texture,const std::string& text) {
    Vector2 mousePosition = GetMousePosition();
    float width = static_cast<float>(texture.width);
    float height = static_cast<float>(texture.height);
    Rectangle rec = {x,y,width,height};
    bool isHovered = CheckCollisionPointRec(mousePosition,rec);
    if(!isHovered) DrawTexture(texture,x,y,WHITE);
    else {
        DrawTexture(texture,x,y,GRAY);
        // if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) ++m_index;
    }
    // if(m_index>=m_questions.size()/5) S_SCREEN = "Roadmap";
    
    DrawText(text.c_str(),x+(texture.width/10),y+(texture.height/3),S_fontSize,S_fontColor);

}	
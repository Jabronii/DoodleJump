#pragma once
#include "Framework.h"
class Game : public Framework
{
public:
    Game(int width, int height, bool fullscreen);
    void PreInit(int& width, int& height, bool& fullscreen);
    bool Init();
    void Close();
    bool Tick();
    void onMouseMove(int x, int y, int xrelative, int yrelative);
    void onMouseButtonClick(FRMouseButton button, bool isReleased);
    void onKeyPressed(FRKey k);
    void onKeyReleased(FRKey k);
    const char* GetTitle();
private:
    int m_width;
    int m_height;
    bool m_fullscreen;
};


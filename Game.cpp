#include "Game.h"

Game::Game(int width, int height, bool fullscreen):m_width(width), m_height(height), m_fullscreen(fullscreen) {

}

void Game::PreInit(int& width, int& height, bool& fullscreen)
{
	width = m_width;
	height = m_height;
	fullscreen = m_fullscreen;
}

bool Game::Init()
{
	return true;
}

void Game::Close()
{
}

bool Game::Tick()
{
	return true;
}

void Game::onMouseMove(int x, int y, int xrelative, int yrelative)
{
}

void Game::onMouseButtonClick(FRMouseButton button, bool isReleased)
{
}

void Game::onKeyPressed(FRKey k)
{
}

void Game::onKeyReleased(FRKey k)
{
}

const char* Game::GetTitle()
{
	return nullptr;
}

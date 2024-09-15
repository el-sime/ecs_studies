#include "Game.hpp"
#include "raylib.h"


void Game::Init(int screenWidth, int screenHeight, std::string title)
{
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    this->title = title;
    
    InitWindow(this->screenWidth, this->screenHeight, title.c_str());
    SetTargetFPS(this->FPSLimit);
    this->isRunning = true;
    this->Run();
}

void Game::Update(float dt)
{
    if(WindowShouldClose()) this->isRunning = false;
    return;
}

void Game::Draw(void)
{
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
}

void Game::Run(void)
{
    while(this->isRunning)
    {
        this->Update(GetFrameTime());
        this->Draw();
    }

    CloseWindow();
}
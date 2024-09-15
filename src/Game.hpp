#ifndef GAME_H
#define GAME_H

#include <string>
class Game
{
    private:
        std::string title;
        int screenWidth;
        int screenHeight;
        int FPSLimit = 60;
        bool isRunning = false;
    public:
        void Init(int screenWidth, int screenHeight, std::string title);
        void Update(float dt);
        void Draw(void);
        void Run(void);
};

#endif
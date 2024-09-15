#ifndef GAME_SCREEN_HPP
#define GAME_SCREEN_HPP


class GameScreen
{
    public:
        virtual void Init() = 0;
        virtual void Update(float dt) = 0;
        virtual void Draw(void) = 0;
        virtual int EndScreen(void) = 0;
};
#endif
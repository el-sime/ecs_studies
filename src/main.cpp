#include "raylib.h"

int main(int argc, char * argv[])
{
    InitWindow(800, 600, "ECS Studies");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(Color{250,250,250,255});
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
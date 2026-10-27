#include <ctype.h>
#include <raylib.h>
#include <copper-utils/copper_da.h>

#define WINDOW_WIDTH    800
#define WINDOW_HEIGHT   450
#define FPS             60
#define BG_COLOR        0x323232FF
#define FG_COLOR        0x32FF32FF

int main(void){
#if defined(__APPLE__) || defined(USE_HIGHDPI)
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
#endif
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Hello!");
    SetTargetFPS(FPS);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(GetColor(BG_COLOR));
        EndDrawing();
    }
    CloseWindow();
}

#include "raylib/raylib.h"

//WINDOW CLASS
class Window{
public:
	Window(int width,int height,const char *title){
		InitWindow(width, height, title);
	}
	void setIcon(const char *path){
		icon = LoadImage(path);
		SetWindowIcon(icon);
	}
	void TargetFPS(int fps){
		SetTargetFPS(fps);
	}
	bool isClosing(){
		return WindowShouldClose();
	}
private:
	Image icon;
};

//RENDERER CLASS
class Renderer{
public:
	void InitRenderer(){
		BeginDrawing();
	}
	void disableRenderer(){
		EndDrawing();
	}
	void clearBG(Color color){
		ClearBackground(color);
	}
	void renderFPS(int x,int y){
		DrawFPS(x, y);
	}
};
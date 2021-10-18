#include "raylib/raylib.h"

class Event{
public:
	bool KeyDown(int key){
		bool pressed = false;
		if(IsKeyDown(key)){
			pressed = true;
		}
		return pressed;
	}
	bool KeyPressed(int key){
		bool pressed = false;
		if(IsKeyPressed(key)){
			pressed = true;
		}
		return pressed;
	}
	bool KeyReleased(int key){
		bool pressed = false;
		if(IsKeyReleased(key)){
			pressed = true;
		}
		return pressed;
	}
	bool KeyUp(int key){
		bool pressed = false;
		if(IsKeyUp(key)){
			pressed = true;
		}
		return pressed;
	}
};
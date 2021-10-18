#include "raylib/raylib.h"

//SPRITE CLASS
class Sprite{
public:
	Sprite(float xPos, float yPos,float width,float height){
		rect = {xPos,yPos,width,height};
	}
	void InitTexture(const char *path){
		texture = LoadTexture(path);
		texture.width = rect.width;
		texture.height = rect.height;
		hasTexture = true;
	}
	void render(Color color){
		if(!destroy){
			DrawRectangleRec(rect, color);
			if(hasTexture){
				DrawTexture(texture, rect.x, rect.y, color);
			}
		}
	}
	void unload(){
		UnloadTexture(texture);
	}
	void updateTexture(){
		texture.width = rect.width;
		texture.height = rect.height;
	}
	float getX(){
		float x = 0;
		if(!destroy){
			x = rect.x;
		}
		return x;
	}
	float getY(){
		float y = 0;
		if(!destroy){
			y = rect.y;
		}
		return y;
	}
	void setX(float x){
		if(!destroy){
			rect.x = x;
		}
	}
	void setY(float y){
		if(!destroy){
			rect.y = y;
		}
	}
private:
	Texture texture;
	bool hasTexture = false;
	bool destroy = false;
	Rectangle rect;
};
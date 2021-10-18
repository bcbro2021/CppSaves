#include "include/include.h"
#include <iostream>
using namespace std;

const int screenWidth = 800;
const int screenHeight = 600;

int main(){
	//init
	Window window(screenWidth,screenHeight,"Hello World");
	window.setIcon("diamond_sword.png");

	//main stuff other than window
	Event event;
	Renderer renderer;

	//player
	float speed = 5.5;
	Sprite player(20,20,16,16);
	player.InitTexture("diamond_sword.png");

	//target fps
	window.TargetFPS(60);
	
	while(!window.isClosing()){
		//update

		//player movement
		if(event.KeyDown(KEY_A))player.setX(player.getX() - speed);
		if(event.KeyDown(KEY_D))player.setX(player.getX() + speed);
		if(event.KeyDown(KEY_W))player.setY(player.getY() - speed);
		if(event.KeyDown(KEY_S))player.setY(player.getY() + speed);


		//render
		renderer.InitRenderer();
		    renderer.clearBG(BLACK);
		    player.render(WHITE);
		renderer.disableRenderer();
	}
	player.unload();
	CloseWindow();
	return 0;
}
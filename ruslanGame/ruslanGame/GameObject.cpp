#include "GameObject.h"
#include "TextureManager.h"
GameObject::GameObject(const char* texturesheet, SDL_Renderer* rend, int x, int y)
{
	renderer = rend;
	objTexture = TextureManager::LoadTexture(texturesheet, rend);
	xpos = x;
	ypos = y;
}

void GameObject::update()
{
	xpos++;
	ypos++;

	srcR.h = 32;
	srcR.w = 32;
	srcR.x = 0;
	srcR.y = 0;

	destR.x = xpos;
	destR.y = ypos;
	destR.w = srcR.w * 2;
	destR.h = srcR.h * 2;
}

void GameObject::render()
{
	SDL_RenderCopy(renderer, objTexture, &srcR, &destR);
}
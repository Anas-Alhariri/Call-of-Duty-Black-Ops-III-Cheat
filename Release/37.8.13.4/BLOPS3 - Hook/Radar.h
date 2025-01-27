#pragma once
#include "Rendering.h"
#include "GlobalVars.h"
#include "CODEngine.h"

class Radar
{
private:
	float backGroundColor[4] = { 0.82f, 0.82f, 0.82f, 0.7f };
	float backGroundLineColor[4] = { 0.20f, 0.60f, 1.0f, 1.0f };

	vec2_t CalcPosition(entity_t* entity);
	void DrawBackGround();
	static Radar* _radar;
public:
	static Radar* Instance();

	float x;
	float y;
	float width;
	float height;
	void Init(float _x, float _y, float _width, float _height);
	void Draw(float* colorEnemy, float* colorFriendly, bool enemyOnly);
};

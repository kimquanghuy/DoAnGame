#pragma once
#include"GameObj.h"
#define MARIO_WALKING_SPEED	0.15f
#define MARIO_JUMP_SPEED_Y	0.5f
#define MARIO_JUMP_DEFLECT_SPEED 0.2f
#define MARIO_GRAVITY	0.002f
#define MARIO_DIE_DEFLECT_SPEED 0.5f

#define MARIO_STATE_IDLE 0
#define MARIO_STATE_WALKING_RIGHT 100
#define MARIO_STATE_WALKING_LEFT 200
#define MARIO_STATE_JUMP 300
#define MARIO_STATE_DIE 400

#define MARIO_ANI_BIG_IDLE_RIGHT 0
#define MARIO_ANI_BIG_IDLE_LEFT 1
#define MARIO_ANI_SMALL_IDLE_RIGHT 2
#define MARIO_ANI_SMALL_IDLE_LEFT 3
#define MARIO_ANI_BIG_WALKING_RIGHT 4
#define MARIO_ANI_BIG_WALKING_LEFT 5
#define MARIO_ANI_SMALL_WALKING_RIGHT 6
#define MARIO_ANI_SMALL_WALKING_LEFT 7
#define MARIO_ANI_DIE 8

#define MARIO_ANI_FIRE_IDLE_RIGHT 9
#define MARIO_ANI_FIRE_IDLE_LEFT 10
#define MARIO_ANI_FIRE_WALKING_RIGHT 11
#define MARIO_ANI_FIRE_WALKING_LEFT 12


#define MARIO_LEVEL_SMALL 1
#define MARIO_LEVEL_BIG 2
#define MARIO_LEVEL_FIREM 3
#define MARIO_BIG_BBOX_W 14
#define MARIO_BIG_BBOX_H 26
#define MARIO_FIRE_BBOX_W 14
#define MARIO_FIRE_BBOX_H 26
#define MARIO_SMALL_BBOX_W 13
#define MARIO_SMALL_BBOX_H 15

#define MARIO_UNTOUCHABLE_TIME 2000

class Mario : public GameObj
{
	int level;
	int untouchable;
	DWORD untouchable_start;
	float start_x;
	float start_y;
public:
	Mario(float x = 0.0f, float y = 0.0f);
	virtual void Update(DWORD dt, vector<LPGAMEOBJ>* colliable_objects = NULL);
	virtual void Render();
	void SetState(int state);
	void SetLevel(int l) { level = l; }
	void StartUntouchable() { untouchable = 1; untouchable_start = GetTickCount(); }

	void Reset();
	void FireMario();

	virtual void GetBBox(float& left, float& top, float& right, float& bottom);
};

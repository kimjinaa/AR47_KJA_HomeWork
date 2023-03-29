#pragma once
#include "ConsoleGameMath.h"
#include <stdio.h>

class Bullet
{
public:
	Bullet();
	int2 BulletPos = int2(0, 0);

	inline void SetBulltPos(const int2& _Value)
	{
		BulletPos.X = _Value.X;
		BulletPos.Y = _Value.Y;
	}

	inline int2 GetBulltPos() const
	{
		return BulletPos;
	}

	void FireBullet(int2 Pos);

private:
	static const int InterFrame = 200;


};
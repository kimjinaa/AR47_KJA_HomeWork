#pragma once
#include "ConsoleGameMath.h"

class Bullet
{
public:
	Bullet();

	inline void SetPos(const int2& _Value)
	{
		BulletPos = _Value;
	}

	inline int2 GetPos() const
	{
		return BulletPos;
	}

	void BulletFire(bool _Fire);
};
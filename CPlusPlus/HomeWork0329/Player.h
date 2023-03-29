#pragma once
#include "ConsoleGameMath.h"
#include "Bullet.h"

class ConsoleGameScreen;
class Player
{
public:
	Player();

	inline void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}

	Bullet NewBullet;

	void Input();

	// �̻����� ����� ���� �̰� ��õ�Ѵ�.
	inline bool IsFire()
	{
		return isFireable;
	}


	void Fire();

protected:

private:
	static const int InterFrame = 200;

	bool isFireable = false;

	int2 Pos = int2(0, 0);

	// �̷� ������ Has a��� �Ѵ�. Player Has a Bullet
	// Bullet NewBullet; // �÷��̾��� ��ü ���ο� �Ѿ� �ѹ��� �ִ�.

};
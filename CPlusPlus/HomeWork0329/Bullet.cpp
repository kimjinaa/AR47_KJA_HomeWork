#include "Bullet.h"
#include "Player.h"
#include "ConsoleGameScreen.h"
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

Bullet::Bullet()
{

}

// ÆøÅºÀ» ¹ß»çÇÏ´Â ÇÔ¼ö
void Bullet::FireBullet(int2 _Pos)
{
	BulletPos.Y -= 1;
}
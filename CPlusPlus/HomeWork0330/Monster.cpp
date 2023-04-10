#include "Monster.h"
#include "ConsoleGameScreen.h"

Monster::Monster() 
{
	RenderChar = 'M';
}

// �����ϼž� �մϴ�. ����� ������ �и��ߴٸ�
void Monster::Render() /*override*/
{
	if (true == IsUpdate())
	{
		ConsoleGameObject::Render();
	} 
	else if(0 < DeathTime)
	{
		if (DeathTime % 2)
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '@');
		}
		else 
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '+');
		}
		
		--DeathTime;
	}
}

void Monster::Update() 
{
	if (false == IsUpdate())
	{
		return;
	}

	if (true == DownCheck)
	{
		DownCheck = false;
		return;
	}

	// Pos.X += Dir;
}
// 038_Class.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

// c++ => c를 기반문법으로 해서
// + 객체지향을 추가한 언어입니다.
// + 다른언어에서 좋다고 칭찬받은 문법들을
// 마구잡이로 흡수하기 시작했다.

// 특정대상이 다른 대상을 때린다.
// 데이터를 변화시켜서 목적을 이룬다.

void StatusRender(
    const char* const _Name, // 전체 이름
    const int& _Att,  // 전체 공격력
    const int& _Hp // 전체 체력
)
{
    printf_s("%s 의 스테이터스 ------------\n", _Name); //전체 스테이터스
    printf_s("공격력 : %d\n", _Att); //전체 공격력
    printf_s("체력 : %d\n", _Hp); //전체 체력
    printf_s("---------------------------\n");
}

void Damage(
    const char* const _AttName, // 플레이어의 이름
    const char* const _DefName, // 몬스터의 이름

    const int& _Att,  // 플레이어의 공격력
    int& _AttHp, // 플레이어의 체력

    const int& _DefAtt, // 몬스터의 공격력
    int& _DefHp// 몬스터의 체력
)
{
    _DefHp -= _Att;
    StatusRender("Player", _Att, _AttHp);
    StatusRender("Monster", _DefAtt, _DefHp);
    printf_s("%s가 공격을 시작합니다\n", _AttName);
    printf_s("%s가 %d의 데미지를 입었습니다.\n", _DefName, _Att);
}



int main()
{
    // 플레이어와 몬스터의 체력 & 공격력
    int PlayerHp = 100; 
    int PlayerAtt = 20;

    int MonsterHp = 100;
    int MonsterAtt = 20;


    while (true)
    {
        // 맨 처음 선언한 전체 스테이터스 함수 호출
        StatusRender("Player", PlayerAtt, PlayerHp);
        StatusRender("Monster", MonsterAtt, MonsterHp);
        _getch();

        system("cls");

        // 두번째로 선언한 플레이어와 몬스터의 데미지 함수 호출
        Damage("Player", "Monster", PlayerAtt, PlayerHp, MonsterAtt, MonsterHp);
        _getch();

        system("cls");

        if (0 >= MonsterHp)
        {
            printf_s("몬스터가 죽었습니다.");
            printf_s("플레이어의 승리입니다.");
            _getch();
            return 0;
        }
         /*Damage("Monster", "Player", MonsterAtt, PlayerHp, PlayerAtt, PlayerHp);
         _getch();

         if (0 >= PlayerHp)
         {
             printf_s("플레이어가 죽었습니다.");
             printf_s("몬스터의 승리입니다.");
             _getch();
             break;
         }
         system("cls");*/
    }
}
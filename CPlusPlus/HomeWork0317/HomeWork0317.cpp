#include <iostream>

// 영어만 씁니다.

// 문자열을 넣어주면 글자 개수를 알아냅니다.
// 0을 포함할지 아닐지는 스스로 정하세요
int StringCount(const char* _String)
{
    int STCount = 0;

    while (_String[STCount])
    {
        int SC = _String[STCount];
        STCount++;
    }

    const int Result = STCount;

    return Result;
}

char* TrimDelete(char* _String) {
    char* new_str = _String;
    while (*_String) {
        if (!std::isspace(*_String)) {
            *new_str++ = *_String;
        }
        ++_String;
    }
    *new_str = '\0';
    return new_str;
}

int StringToInt(const char* _String) {
    int num = std::atoi(_String);
    return num;
}

int main()
{
    int Return0 = StringCount("aaaa");
    int Return1 = StringCount("aaaaaaaaaaaaaaaa ggg sss");

    char Arr0[1024] = "a b c d e";
    char Arr1[1024] = "a    b c    d    e";
    char Arr2[1024] = "ab    cde    ";

    TrimDelete(Arr0);
    printf_s(Arr0);
    TrimDelete(Arr1);
    printf_s(Arr1);
    TrimDelete(Arr2);
    printf_s(Arr2);

    // 영어나 다른글자가 섞여 들어가있는것을 가정하지 않는다.
    int RValue0 = StringToInt("1111");
    int RValue1 = StringToInt("432");
    int RValue2 = StringToInt("4523312");
    int RValue3 = StringToInt("432231");

}

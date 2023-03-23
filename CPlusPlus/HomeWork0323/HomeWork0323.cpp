// HomeWork0323.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class Number
{
private:
	int Value;

public:
	// 맴버 이니셜라이저.
	Number(int _Value)
		: Value(_Value)
	{

	}
	int operator[](size_t _Value)
	{
		return Value;
	}


	/*bool operator==(int _Value)
	{
		return false;
	}*/


	// 클래스가 연산자를 사용할수 있게 만들어주는 것.

	// 산술연산자
	int operator+(int _Value)
	{
		return Value + _Value;
	}

	int operator-(int _Value)
	{
		return Value - _Value;
	}

	int operator*(int _Value)
	{
		return Value * _Value;
	}

	int operator/(int _Value)
	{
		return Value / _Value;
	}

	int operator%(int _Value)
	{
		return Value % _Value;
	}

	int operator++()
	{
		return ++Value;
	}

	int operator--()
	{
		return --Value;
	}

	// 비교연산자
	bool operator==(int _Value)
	{
		return Value == _Value;
	}

	bool operator!=(int _Value)
	{
		return Value != _Value;
	}

	bool operator<=(int _Value)
	{
		return Value <= _Value;
	}

	bool operator>=(int _Value)
	{
		return Value >= _Value;
	}

	bool operator<(int _Value)
	{
		return Value < _Value;
	}

	bool operator>(int _Value)
	{
		return Value > _Value;
	}

	// 논리연산자
	bool operator!()
	{
		return !Value;
	}

	bool operator&&(int _Value)
	{
		return Value && _Value;
	}

	bool operator||(int _Value)
	{
		return Value || _Value;
	}

	// 비트연산자
	int operator&(int _Value)
	{
		return Value & _Value;
	}

	int operator|(int _Value)
	{
		return Value | _Value;
	}

	int operator^(int _Value)
	{
		return Value ^ _Value;
	}

	int operator<<(int _Value)
	{
		return Value << _Value;
	}

	int operator>>(int _Value)
	{
		return Value >> _Value;
	}

	// 복합 할당 연산자
	int operator+=(int _Value)
	{
		return Value += _Value;
	}

	int operator-=(int _Value)
	{
		return Value -= _Value;
	}

	int operator*=(int _Value)
	{
		return Value *= _Value;
	}

	int operator/=(int _Value)
	{
		return Value /= _Value;
	}

	int operator%=(int _Value)
	{
		return Value %= _Value;
	}
};


int main()
{
	Number NewNumber = 10;

	// 연산자 겹지정 함수라고 부릅니다.
	NewNumber + 10;
	NewNumber.operator+(10);
	NewNumber.operator-(10);
	NewNumber.operator*(10);
	NewNumber.operator/(10);
	NewNumber.operator%(10);
	NewNumber.operator++();
	NewNumber.operator--();

	NewNumber.operator==(10);
	NewNumber.operator!=(10);
	NewNumber.operator<=(10);
	NewNumber.operator>=(10);
	NewNumber.operator<(10);
	NewNumber.operator>(10);

	NewNumber.operator!();
	NewNumber.operator&&(10);
	NewNumber.operator||(10);

	NewNumber.operator&(10);
	NewNumber.operator|(10);
	NewNumber.operator^(10);
	NewNumber.operator<<(10);
	NewNumber.operator>>(10);

	NewNumber.operator+=(10);
	NewNumber.operator-=(10);
	NewNumber.operator*=(10);
	NewNumber.operator/=(10);
	NewNumber.operator%=(10);

	std::cout << "Hello World!\n";
}

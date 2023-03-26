// HomeWokr0323.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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


	bool operator==(Number& _Value)
	{
		return this == &_Value;
	}

	int operator,(int _Value)
	{
		return  _Value;
	}
	bool operator!()
	{
		return  this;
	}
	int operator%=(int _Value)
	{
		return  _Value;
	}
	int operator&&(int _Value)
	{
		return  _Value;
	}
	
	int operatornew(int _Value)
	{
		return  _Value;
	}
	int operatordelete(int _Value)
	{
		return  _Value;
	}
	int operator<=(int _Value)
	{
		return  _Value;
	}
	int operator|(int _Value)
	{
		return  _Value;
	}

	// 클래스가 연산자를 사용할수 있게 만들어주는 것.
	int operator+(int _Value)
	{
		return Value + _Value;
	}
	
	
};


int main()
{
	Number NewNumber = 10;
	Number NewNumber2 = 10; 
	

	// 연산자 겹지정 함수라고 부릅니다.
	if (NewNumber == NewNumber2)
	{
		int a = 0;
	}
	NewNumber + 10;
	NewNumber.operator+(10);

}

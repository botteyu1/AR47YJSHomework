#pragma once

// 헤더에만 다 만든다.
class int2
{
public:
	int X = 0;
	int Y = 0;

public:
	inline int2 Half()
	{
		return { X / 2, Y / 2 };
	}

public:
	inline int2()
	{

	}

	bool operator==(int2 _int2)
	{
		if (_int2.X == X and _int2.Y == Y)
		{
			return true;
		}
		return false;
	}
	
	/*bool operator==(const int2& _int2)
	{
		if (_int2.X == X and _int2.Y == Y)
		{
			return true;
		}
		return false;
	}*/

	// 생성자에 
	inline int2(int _X, int _Y)
		: X(_X), Y(_Y)
	{

	}
};
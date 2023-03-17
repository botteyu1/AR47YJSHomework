// 033_MyPrintf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//              100       108
inline void Test(int Value, ...)
{
	__int64 Address = (__int64)&Value;
	int* Ptr = (int*)Address;

	int Value0 = Ptr[2];
	int Value1 = Ptr[4];
	int Value2 = Ptr[6];

	int a = 0;

}

inline int MyPrintf(const char* const _Value, ...)
{
	__int64 Address = (__int64)&_Value;
	char* Ptr = (char*)Address;
	Ptr += 8;
	int* IntPtr = (int*)Ptr;
	int Value0 = *IntPtr;

	return 0;

	int Count = 0;

	while (0 != _Value[Count])
	{
		char Value = _Value[Count];
		if ('%' == Value)
		{
			++Count;
			char Format = _Value[Count];

			switch (Format)
			{
			case 'd':
			{
				
				break;
			}
			case 's':
			{

				break;
			}
			default:
				break;
			}
		}
		else 
		{
			putchar(Value);
		}

		Count++;
	}

	return 0;
}

int main()
{
	Test(10, 1, 2, 3, 4);

	// printf_s("abcdefg %s", 321312);

	MyPrintf("abcdefg %d fasdfasdfasdf", 111);
}

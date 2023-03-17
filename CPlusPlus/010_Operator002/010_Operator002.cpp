#include <iostream>

int main()
{
	int Left = 0b00000000000000000000000000000010;
	int Right = 0b00000000000000000000000000000001;
	int Result = 0b00000000000000000000000000000000;
	
	// 비트단위 연산자.
	// 0b00000000000000000000000000000000
	// Not
	Result = ~0;

	// 0b00000000000000000000000000000010
	// 0b00000000000000000000000000000001
	// 0b00000000000000000000000000000000
	// and
	Result = Left & Right;
	// or
	Result = Left | Right;
	// xor // 둘이 다를때만 true
	Result = Left | Right;
	// 둘이 1로 같든 0으로 같은 같으면 false가 된다.
	Result = 3 ^ 3;

	// true와 false 참과 거짓의 명확한 의미를 
	// 한번 짚고 넘어가겠습니다.
	// 특정 메모리 영역의 비트가 전부 0이라면 false 와 거짓
	// 특정 메모리 영역의 비트중 단 1개라도 1이 있다면 true 와 참
	bool bResult = 2;
	bResult = 0 && 10021312;

	// 0b00000000000000000000000000001000
	Result = 1 << 3;

	// 이런식의 어떤일이 발생할지 알수 없는 코드는 애초에 쓰지 않아요.
	Result = 1 << 33;
	Result = 1 >> 1;

	// 복합할당 연산자.
	// 특정 메모리영역의 값을 기반으로 하는 이항 연산자
	
	//덧셈 대입	a += b	예	예	T & T::operator+=(const T & b);	T& operator+=(T & a, const T & b);
	//뺄셈 대입	a -= b	예	예	T & T::operator-=(const T & b);	T& operator-=(T & a, const T & b);
	//곱셈 대입	a *= b	예	예	T & T::operator*=(const T & b);	T& operator*=(T & a, const T & b);
	//나눗셈 대입	a /= b	예	예	T & T::operator/=(const T & b);	T& operator/=(T & a, const T & b);
	//모듈러 대입	a %= b	예	예	T & T::operator%=(const T & b);	T& operator%=(T & a, const T & b);
	//비트 AND 대입	a &= b	예	예	T & T::operator&=(const T & b);	T& operator&=(T & a, const T & b);
	//비트 OR 대입	a |= b	예	예	T & T::operator|=(const T & b);	T& operator|=(T & a, const T & b);
	//비트 XOR 대입	a ^= b	예	예	T & T::operator^=(const T & b);	T& operator^=(T & a, const T & b);
	//비트 왼쪽 시프트 대입	a <<= b	예	예	T & T::operator<<=(const T & b);	T& operator<<=(T & a, const T & b);
	//비트 오른쪽 시프트 대입	a >>= b	예	예	T & T::operator>>=(const T & b);	T& operator>>=(T & a, const T & b);

	int Value = 20;

	Value = Value + 10;

	// 복합
	Value += Value;
	Value = 1;

	Value = Value << 3;

	// heal
	Value = Value + 30;
	Value += 30;
}

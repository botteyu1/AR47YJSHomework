// 060_FunctionPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 이 함수도 프로세스로 메모리에 올라갈것이기 때문에.
// 위치가 있을수밖에 없다.
// 이 위치는 정해져 있어요.
void PlayerAttack() 
{
	printf_s("플레이어가 공격합니다.");
}

void PlayerMove()
{
	printf_s("플레이어가 이동합니다.");
}

// 문법적으로도 어려워하는 부분이고.
// 행동을 변수로 마드는 것입니다.

class PlayerMoveButton
{
public:
	// void(*Ptr)();

	void Click() 
	{
		PlayerMove();
	}
};

class PlayerAttackButton
{
public:
	// void(*Ptr)();

	void Click()
	{
		PlayerAttack();
	}
};

class UIButton
{
public:
	void(*Ptr)() = nullptr;

	void Click()
	{
		if (nullptr == Ptr)
		{
			return;
		}

		Ptr();
	}
};



int main()
{
	{
		// void(*)();

		void(*Ptr)();

		// void PlayerAttack()
		// PlayerAttack 주소값을 의미하게 되니까.
		// 둘의 자료형은 완전히 동일하다.
		// void(*)() == void PlayerAttack();
		//    int  ==  10;

		// 모든 자료형은 배열로 사용할수 있습니다.
		// int[] => int Arr[10]
		// void(*[])() = void(*ArrFunctions[10])()

		// int Arr[10] = int* Ptr = Arr
		// // 단순히 이렇게 안될수도 있습니다.
		// int* Arr[10] = int** Ptr = Arr
		// void(*ArrFunctions[10])() = void(**FunctionsPtr)() = ArrFunctions

		{
			int* Arr[10];
			int** Ptr = Arr;
		}

		{
			void(*ArrFunctions[10])();
			void(**FunctionsPtr)() = ArrFunctions;
		}

		{
			int****** Arr[10];
			int******* Ptr = Arr;
		}

		// Ptr = 특정한 함수의 이름을 넣어줌으로
		// Ptr 이 변수가 그 함수를 호출할수 있게 된다.

		int* intPtr;
		int* intPtrArr[10];

		// int
		intPtrArr[0];

		int intArr[10];

		// int Value = 10;
		
		// main()
		// int main()
	}

	{
		UIButton PlayerAttackButton;
		UIButton PlayerMoveButton;
		PlayerAttackButton.Ptr = PlayerAttack;
		PlayerMoveButton.Ptr = PlayerMove;
		PlayerAttackButton.Click();
		PlayerMoveButton.Click();
	}

	{
		int ArrValue[20];
		int* Ptr = ArrValue;
		*Ptr; 

		// ArrValue = int[]
		// Ptr = int*
		// *Ptr = int
		// Ptr[0] = int
		// Ptr[1] = int



		int* ArrTest[20];
		int** PtrAAA = ArrTest;
		*PtrAAA;

		// ArrTest = int*[]
		// PtrAAA = int**
		// *PtrAAA = int*
		// PtrAAA[0] = int*
		// PtrAAA[1] = int*



	}

	{
		// void(*Ptr)();

		// void(*)()

		void(*ArrFunction[20])();
		ArrFunction[0] = PlayerAttack;
		void(**PtrTest)() = ArrFunction;
		PtrTest[0]();
		int Size = sizeof(PtrTest);

		// ArrTest = void(*[])()
		// PtrTest = void(**)()
		// *PtrTest = void(*)()
		// PtrTest[0] = void(*)()
		// PtrTest[1] = void(*)()

		// sizeof(PtrTest) == 8

	}

	// 리턴값 (* 함수포인터명 ) (인자) 
	//void(*Ptr)() = PlayerAttack;
	//Ptr();
	//Ptr = PlayerMove;
	//Ptr();

}

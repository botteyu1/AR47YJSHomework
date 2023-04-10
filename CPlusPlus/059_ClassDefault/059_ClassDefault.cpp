// 059_ClassDefault.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyValue 
{
public:
    MyValue(int Value) {} // 디폴트 생성자.
    ~MyValue() {} // 디폴트 소멸자

    MyValue& operator=(const MyValue& _Other) = delete; // 디폴트 대입 연산자
    MyValue& operator=(const MyValue&& _Other) = delete; // 디폴트 대입 연산자
    MyValue(const MyValue& _Other) = delete; // 디폴트 복사 생성자
    MyValue(const MyValue&& _Other) = delete; // RValue 복사 생성자

protected:

private:

    // public:
    // A& operator=(const A& _Other) {}
    // 디폴트 대입연산자가 존재합니다.
    // A& operator=(const A&& _Other) {} // RValue 대입연산자가 존재합니다.

    // public:
    // A() {} // 디폴트 생성자.
    // A(const A& _Other) {} // 디폴트 복사 생성자
    // A(const A&& _Other) {} // RValue 복사 생성자
    // ~A() {} // 디폴트 소멸자
};

class A 
{
// private: // 디폴트 접근제한 지정자
    int A;

// public:
// A& operator=(const A& _Other) {}
// 디폴트 대입연산자가 존재합니다.
// A& operator=(const A&& _Other) {} // RValue 대입연산자가 존재합니다.

// public:
// A() {} // 디폴트 생성자.
// A(const A& _Other) {} // 디폴트 복사 생성자
// A(const A&& _Other) {} // RValue 복사 생성자
// ~A() {} // 디폴트 소멸자
};

int main()
{
    // 디폴트 생성자.
    {
        A NewA0 = A();
        A NewA1 = A(NewA0);
        NewA1 = NewA0;
        NewA0.~A();
    }

    {
        MyValue NewA0{1};


        // MyValue NewA0 = MyValue();
        //MyValue NewA1 = MyValue(NewA0);
        //NewA1 = NewA0;
    }

    std::cout << "Hello World!\n";
}

// GameEngineMap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
#include <list>
#include "GameEngineMap.h"

template<typename DataType0, typename DataType1>
void TestValue(DataType0 _Data0, DataType1 _Data1)
{
}

class Item 
{

};

class Inven 
{
public:
    void AddItem(Item* Item);

    //void AddWeapon(Item* Item);
    //void AddArmor();
    //void AddPotion();
    //void AddQuestItem();
};

int main()
{
    GameEngineDebug::LeckCheck();

    {
        GameEngineMap Test;
        Test.insert(GameEnginePair(10, rand()));
        Test.insert(GameEnginePair(7, rand()));
        Test.insert(GameEnginePair(15, rand()));
        Test.insert(GameEnginePair(25, rand()));
        Test.insert(GameEnginePair(17, rand()));
        Test.insert(GameEnginePair(18, rand()));
        Test.insert(GameEnginePair(2, rand()));
        Test.insert(GameEnginePair(6, rand()));
        Test.insert(GameEnginePair(5, rand()));
        Test.insert(GameEnginePair(4, rand()));
        Test.insert(GameEnginePair(9, rand()));
        Test.insert(GameEnginePair(8, rand()));
        Test.insert(GameEnginePair(1, rand()));

        //{
        //    GameEngineMap::iterator FindIter = Test.find(7);
        //    GameEngineMap::iterator NextIter = Test.erase(FindIter);
        //}
        //{
        //    GameEngineMap::iterator FindIter = Test.find(9);
        //    GameEngineMap::iterator NextIter = Test.erase(FindIter);
        //}

        //{
        //    GameEngineMap::iterator FindIter = Test.find(6);
        //    GameEngineMap::iterator NextIter = Test.erase(FindIter);
        //}

        //{
        //    GameEngineMap::iterator FindIter = Test.find(10);
        //    GameEngineMap::iterator NextIter = Test.erase(FindIter);
        //}


        //{
        //    GameEngineMap::iterator FindIter = Test.find(10);
        //    GameEngineMap::iterator NextIter = Test.erase(FindIter);
        //}


        std::cout << "그냥 돌리기" <<  std::endl;
        GameEngineMap::iterator StartIter = Test.begin();
        GameEngineMap::iterator EndIter = Test.end();
        /*for (; StartIter != EndIter; ++StartIter)
        {
            std::cout << StartIter->first << std::endl;
        }

        std::cout << "전위 순회" << std::endl;
        Test.FirstOrder();
        std::cout << "중위 순회" << std::endl;
        Test.MidOrder();    
        std::cout << "후위 순회" << std::endl;
        Test.LastOrder();*/
        Test.AllDelete();


    }

    return 1;

    {
        std::list<int> Value;
        Value.push_back(20);
        Value.push_back(30);

        for (int& Test : Value)
        {
            // Test = 내부의 변수;
            Test = 50;
        }

        //for (std::list<int>::iterator Iter : Value)
        //{
        //}

        int a = 0;
    }

    {
        std::pair<int, int> NewPair;
        NewPair.first;
        NewPair.second;


        std::map<int, int> Test;

        std::pair<std::map<int, int>::iterator, bool> Value0
            = Test.insert(std::pair<int, int>(5, rand()));

        // 키가 겹칠때는 무시하면서 리턴해주는게 정상적으로 들어간 노드를 리턴해준다.

        std::pair<std::map<int, int>::iterator, bool> Value7
            = Test.insert(std::pair<int, int>(5, rand()));

        if (Value7.second == false)
        {
            int a = 0;
            // 같은 키를 가진 녀석을 넣어줬다.
        }

        std::pair<std::map<int, int>::iterator, bool> Value1
            = Test.insert(std::pair<int, int>(4, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value2
            = Test.insert(std::pair<int, int>(7, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value3
            = Test.insert(std::pair<int, int>(1, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value4
            = Test.insert(std::pair<int, int>(2, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value5
            = Test.insert(std::pair<int, int>(15, rand()));

        std::map<int, int>::iterator FindIter = Test.find(1);
        std::map<int, int>::iterator NextIter = Test.erase(FindIter);

        int a = 0;

        // 탐색을 용이하게 하기 위해서 사용한다.
        // 사용성이 좋아요.

        //for (const std::pair<int, int>& Value : Test)
        //{

        //}

        // std::pair<int, int> Pair;
        // int& Value = Pair;

        std::map<int, int>::iterator StartIter = Test.begin();
        std::map<int, int>::iterator EndIter = Test.end();

       

        // for (; StartIter != EndIter; ++StartIter)
        // {
            // Key 
            // StartIter->first = 20;

            // std::cout << StartIter->first << std::endl;
            // Value
            //StartIter->second = 60;
        // }

        //for (const std::pair<int, int>& Value : Test)
        //{
        //    Value.first = 20;
        //}
    }

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

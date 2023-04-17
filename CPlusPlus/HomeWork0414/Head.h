#pragma once
#include "Parts.h"
#include <vector>

// 설명 :
class Head : public Parts
{
public:
	// constrcuter destructer
	Head();
	~Head();

	// delete Function
	Head(const Head& _Other) = delete;
	Head(Head&& _Other) noexcept = delete;
	Head& operator=(const Head& _Other) = delete;
	Head& operator=(Head&& _Other) noexcept = delete;

	static bool IsPlay;
	void Render() override;

protected:
	void Update() override;
	void IsBodyCheck();
	void NewBodyCreateCheck();

private:
	void SetBodyPos();
	int2 Dir = int2::Up;

	

	//바디에 사용될 헤드 과거좌표를 저장
	std::vector<int2> AllSnakes;

	//현재 가지고있는 바디 숫자
	int CurBodyCnt = 0;

	//vector내에 처음 바디 번호
	int FirstBody = 0;
	bool IsCollisionCheck();

};


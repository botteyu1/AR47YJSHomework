#pragma once
#include "Parts.h"
#include <vector>

// ���� :
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

	

	//�ٵ� ���� ��� ������ǥ�� ����
	std::vector<int2> AllSnakes;

	//���� �������ִ� �ٵ� ����
	int CurBodyCnt = 0;

	//vector���� ó�� �ٵ� ��ȣ
	int FirstBody = 0;
	bool IsCollisionCheck();

};


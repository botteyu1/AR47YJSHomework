#pragma once
#include "Parts.h"
#include <vector>
class Body : public Parts
{
public:
	// constrcuter destructer
	Body();
	~Body();

	// delete Function
	Body(const Body& _Other) = delete;
	Body(Body&& _Other) noexcept = delete;
	Body& operator=(const Body& _Other) = delete;
	Body& operator=(Body&& _Other) noexcept = delete;

	void SetRandPos(int2 _HeadPos , std::vector<int2>& _AllSnakes, int _CurBodyCnt , int _FirstBody) ;

	void Update();
	void BeCaught();
	
protected:

private:
	
};


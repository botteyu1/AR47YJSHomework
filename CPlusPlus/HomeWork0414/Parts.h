#pragma once
#include <GameEngineConsole/ConsoleGameObject.h>

#include <vector>

// ���� :
class Parts : public ConsoleGameObject
{
public:
	
	// constrcuter destructer
	Parts();
	~Parts();

	// delete Function
	Parts(const Parts& _Other) = delete;
	Parts(Parts&& _Other) noexcept = delete;
	Parts& operator=(const Parts& _Other) = delete;
	Parts& operator=(Parts&& _Other) noexcept = delete;
	
	

protected:
	void Push_back(Parts* _Next);

	Parts* Next = nullptr;
	Parts* Prev = nullptr;

	void Update() override;
private:

};


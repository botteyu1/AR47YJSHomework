#pragma once

// Ό³Έν :
class ADefaultClass
{
public:
	// constrcuter destructer
	ADefaultClass();
	~ADefaultClass();

	// delete Function
	ADefaultClass(const ADefaultClassa& _Other) = delete;
	ADefaultClass(ADefaultClass&& _Other) noexcept = delete;
	ADefaultClass& operator=(const ADefaultClass& _Other) = delete;
	ADefaultClass& operator=(ADefaultClass&& _Other) noexcept = delete;

protected:

private:

};


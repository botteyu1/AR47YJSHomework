#pragma once

// Ό³Έν :
class ADefaultClassaaaa
{
public:
	// constrcuter destructer
	ADefaultClassaaaa();
	~ADefaultClassaaaa();

	// delete Function
	ADefaultClassaaaa(const ADefaultClassaaaa& _Other) = delete;
	ADefaultClassaaaa(ADefaultClassaaaa&& _Other) noexcept = delete;
	ADefaultClassaaaa& operator=(const ADefaultClassaaaa& _Other) = delete;
	ADefaultClassaaaa& operator=(ADefaultClassaaaa&& _Other) noexcept = delete;

protected:

private:

};


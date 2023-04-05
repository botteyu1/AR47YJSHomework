#pragma once

// Ό³Έν :
class AClassDefau1lt1
{
public:
	// constrcuter destructer
	AClassDefau1lt1();
	~AClassDefau1lt1();

	// delete Function
	AClassDefau1lt1(const ADefaultClassa& _Other) = delete;
	AClassDefau1lt1(AClassDefau1lt1&& _Other) noexcept = delete;
	AClassDefau1lt1& operator=(const AClassDefau1lt1& _Other) = delete;
	AClassDefau1lt1& operator=(AClassDefau1lt1&& _Other) noexcept = delete;

protected:

private:

};


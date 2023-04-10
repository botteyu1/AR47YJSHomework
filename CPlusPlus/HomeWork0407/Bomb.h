#pragma once
#include <GameEngineConsole/ConsoleGameObject.h>


class ConsoleGameScreen;
class Bomb : public ConsoleGameObject
{
private:
	int BoomCount = 10;
	int DeathCount = 2;

public:
	// constrcuter destructer
	Bomb();
	~Bomb();

	// delete Function
	Bomb(const Bomb& _Other) = delete;
	Bomb(Bomb&& _Other) noexcept = delete;
	Bomb& operator=(const Bomb& _Other) = delete;
	Bomb& operator=(Bomb&& _Other) noexcept = delete;

	void Init();

protected:
	void Update() override;
	void Render() override;

	void Exploding(const int _iNum);

};


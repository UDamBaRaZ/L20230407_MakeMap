#pragma once

//추상 클래스, 인터페이스 구성
class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape);
	virtual~AActor();

	//virtual void Input() = 0; //순수 가상함수
	virtual void Input();
	virtual void Tick();
	virtual void Render();


public: //protected: 로 구성하는게 맞지만 Get, Set 세팅하여야만 함
	int X;
	int Y;
	char Shape;
};


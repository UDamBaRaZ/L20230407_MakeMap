#pragma once

//�߻� Ŭ����, �������̽� ����
class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape);
	virtual~AActor();

	//virtual void Input() = 0; //���� �����Լ�
	virtual void Input();
	virtual void Tick();
	virtual void Render();


public: //protected: �� �����ϴ°� ������ Get, Set �����Ͽ��߸� ��
	int X;
	int Y;
	char Shape;
};


#pragma once
#include <vector>
#include "Actor.h"

class AActor; //���� ����, ��� ������ �ʿ��Ҷ� ����϶�/ �����Ϳ����� ���

class UWorld
{
public:
	UWorld();	
	virtual ~UWorld();

	void UWorld::SpawnActor();

public
	std::vector<class AActor*> Actors;

};


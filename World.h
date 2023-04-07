#pragma once
#include <vector>
#include "Actor.h"

class AActor; //전방 선언, 어딘가 있으니 필요할때 사용하라/ 포인터에서만 사용

class UWorld
{
public:
	UWorld();	
	virtual ~UWorld();

	void UWorld::SpawnActor();

public
	std::vector<class AActor*> Actors;

};


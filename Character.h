#pragma once
#include "Actor.h"


class FCharacter : public AActor
{
	FCharacter();
	virtual ~FCharacter();

	virtual void Move(int Position_X, int Position_Y);	

};


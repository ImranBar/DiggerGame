#pragma once
#include "StaticObject.h"
#include <SFML/Graphics.hpp>
#include "Digger.h"


class ScorePresent : public Present
{
public:
	//c-tor
	using Present::Present;

	//d-tor
	~ScorePresent();

	virtual void collisionObj(Digger& digger);
private:

};

#include "Wall.h"

Wall::~Wall()
{
}

void Wall::collisionObj(Digger& digger)
{
	digger.collisionObj(*this); //to stop digger
}

void Wall::collisionObj(Wall& wall)
{
}

void Wall::collisionObj(Rock& rock)
{
}

void Wall::collisionObj(Diamond& diamond)
{
}

void Wall::collisionObj(Present& present)
{
}

void Wall::collisionObj(Monster& monster)
{
	monster.collisionObj(*this); //to stop monster
}

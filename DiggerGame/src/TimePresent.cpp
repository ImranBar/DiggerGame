#include "TimePresent.h"


TimePresent::~TimePresent() {

}



void TimePresent::collisionObj(Digger& digger)
{
	m_isRemove = true;
	digger.bonus(3); //timer
	digger.collisionObj(*this);
}
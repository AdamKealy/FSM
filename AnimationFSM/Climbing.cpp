#include <Climbing.h>
#include <Jumping.h>
#include <Hammering.h>
#include <Idle.h>

#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::hammering(Animation * a)
{
	std::cout <<"Climbing -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
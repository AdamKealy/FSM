#include <Jumping.h>
#include <Climbing.h>
#include <Hammering.h>
#include <Idle.h>

#include <string>

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::hammering(Animation * a)
{
	std::cout << "Jumping -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
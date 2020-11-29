#include "ducks/MallardDuck.hpp"
#include "behaviors/fly/FlyWithWings.hpp"
#include "behaviors/quack/Quack.hpp"

MallardDuck::MallardDuck() : Duck(new FlyWithWings{}, new Quack{})
{
    // nothing to do
}

std::string MallardDuck::display()
{
    return "I'm a real Mallard duck";
}
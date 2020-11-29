#include "ducks/ModelDuck.hpp"
#include "behaviors/fly/FlyNoWay.hpp"
#include "behaviors/quack/Quack.hpp"

ModelDuck::ModelDuck() : Duck(new FlyNoWay{}, new Quack{})
{
}

std::string ModelDuck::display()
{
    return "I'm a model duck";
}
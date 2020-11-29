#ifndef FLYNOWAY_HPP
#define FLYNOWAY_HPP

#include "FlyBehavior.hpp"

class FlyNoWay: public FlyBehavior
{
    std::string fly() override;
};

#endif // FLYNOWAY_HPP
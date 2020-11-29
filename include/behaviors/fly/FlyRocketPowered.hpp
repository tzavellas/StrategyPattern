#ifndef FLYROCKETPOWERED_HPP
#define FLYROCKETPOWERED_HPP

#include "FlyBehavior.hpp"

class FlyRocketPowered: public FlyBehavior
{
    std::string fly() override;
};

#endif // FLYROCKETPOWERED_HPP
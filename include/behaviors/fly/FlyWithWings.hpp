#ifndef FLYWITHWINGS_HPP
#define FLYWITHWINGS_HPP

#include "FlyBehavior.hpp"

class FlyWithWings: public FlyBehavior
{
    std::string fly() override;
};

#endif // FLYWITHWINGS_HPP
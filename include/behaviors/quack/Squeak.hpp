#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include "QuackBehavior.hpp"

class Squeak : public QuackBehavior
{
public:
    std::string quack() override;
};

#endif // SQUEAK_HPP
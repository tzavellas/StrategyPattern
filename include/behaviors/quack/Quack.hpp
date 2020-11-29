#ifndef QUACK_HPP
#define QUACK_HPP

#include "QuackBehavior.hpp"

class Quack : public QuackBehavior
{
public:
    std::string quack() override;
};

#endif // QUACK_HPP
#ifndef MUTEQUACK_HPP
#define MUTEQUACK_HPP

#include "QuackBehavior.hpp"

class MuteQuack : public QuackBehavior
{
public:
    std::string quack() override;
};

#endif // MUTEQUACK_HPP
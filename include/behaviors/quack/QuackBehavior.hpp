#ifndef QUACKBEHAVIOR_HPP
#define QUACKBEHAVIOR_HPP

#include <string>

class QuackBehavior
{
public:
    virtual std::string quack() = 0;
};

#endif // QUACKBEHAVIOR_HPP
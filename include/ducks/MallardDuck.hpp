#ifndef MALLARDDUCK_HPP
#define MALLARDDUCK_HPP

#include "Duck.hpp"

class MallardDuck : public Duck
{
public:
    MallardDuck();
    ~MallardDuck() = default;
    std::string display() override;
};

#endif // MALLARDDUCK_HPP
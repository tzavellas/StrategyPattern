#ifndef MODELDUCK_HPP
#define MODELDUCK_HPP

#include "Duck.hpp"

class ModelDuck : public Duck
{
public:
    ModelDuck();
    ~ModelDuck() = default;
    std::string display() override;
};

#endif // MODELDUCK_HPP
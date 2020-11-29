#ifndef DUCK_HPP
#define DUCK_HPP

#include <memory>

class FlyBehavior;
class QuackBehavior;

class Duck
{
public:
    Duck(FlyBehavior* flyBehavior = nullptr, QuackBehavior* quackBehavior = nullptr);
    virtual ~Duck();
    virtual std::string display() = 0;
    virtual std::string performFly();
    virtual std::string performQuack();
    virtual std::string swim();
    virtual void setFlyBehavior(FlyBehavior* fb);
    virtual void setQuackBehavior(QuackBehavior* qb);
protected:
    std::unique_ptr< FlyBehavior > m_flyBehavior;
    std::unique_ptr< QuackBehavior > m_quackBehavior;
};

#endif // DUCK_HPP
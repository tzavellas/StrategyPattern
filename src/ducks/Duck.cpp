#include "ducks/Duck.hpp"
#include "behaviors/fly/FlyBehavior.hpp"
#include "behaviors/quack/QuackBehavior.hpp"

Duck::Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior) : m_flyBehavior(flyBehavior), m_quackBehavior(quackBehavior)
{
    // nothing to do
}

Duck::~Duck()
{
    m_quackBehavior.reset();
    m_flyBehavior.reset();
}

std::string Duck::performFly()
{
    if (m_flyBehavior)
    {
        return m_flyBehavior->fly();
    }
    return "";
}

std::string Duck::performQuack()
{
    if (m_quackBehavior)
    {
        return m_quackBehavior->quack();
    }
    return "";
}

std::string Duck::swim()
{
    return "All ducks float, even decoys!";
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
    m_flyBehavior.reset(fb);
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
    m_quackBehavior.reset(qb);
}
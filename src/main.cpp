#include "ducks/MallardDuck.hpp"
#include "ducks/ModelDuck.hpp"
#include "behaviors/fly/FlyRocketPowered.hpp"
#include <iostream>

int main()
{
    std::shared_ptr< Duck > mallard = std::make_shared< MallardDuck >();
    std::cout << mallard->display() << std::endl;
    std::cout << mallard->performQuack() << std::endl;
    std::cout << mallard->performFly() << std::endl;

    std::shared_ptr<Duck> model = std::make_shared<ModelDuck>();
    std::cout << model->display() << std::endl;
    std::cout << model->performFly() << std::endl;
    model->setFlyBehavior(new FlyRocketPowered{});
    std::cout << model->performFly() << std::endl;
    return 0;
}
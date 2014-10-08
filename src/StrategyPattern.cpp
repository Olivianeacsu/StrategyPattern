//============================================================================
// Name        : StrategyPattern.cpp
// Author      : Olivia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

using namespace std;

int main() {
	MallardDuck* mallard = new MallardDuck();
	RubberDuck* rubberDuckie= new RubberDuck();
	ModelDuck* model = new ModelDuck();

	mallard->performQuack();
	rubberDuckie->performQuack();

	model->performFly();
	model->setFlyBehavior(new FlyRocketPowered());
	model->performFly();


	return 0;
}

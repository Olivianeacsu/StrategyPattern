/*
 * RubberDuck.cpp
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "Squeak.h"

RubberDuck::RubberDuck() {
	flyBehavior = new FlyNoWay();
	quackBehavior = new Squeak();

}

void RubberDuck::display(){
	cout<<"I am a rubber duck!";
}
